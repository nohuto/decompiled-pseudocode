/*
 * XREFs of ndisReferenceMiniportByName @ 0x1C00E8720
 * Callers:
 *     NdisEnumerateFilterModules @ 0x1C00522E0 (NdisEnumerateFilterModules.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C0059304 (ndisIMDeleteIfStackEntry.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A8144 (ndisWmiQuerySingleInstance.c)
 *     ndisHandleBindNotification @ 0x1C00B3678 (ndisHandleBindNotification.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CCFB0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D6580 (ndisWmiQueryAllData.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(__int64 *SourceString, __int64 *a2, char a3, unsigned __int8 a4)
{
  unsigned int v7; // r12d
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rsi
  KIRQL v10; // r13
  __int64 v11; // rdx
  __int64 MiniportQueue; // rbx
  unsigned __int16 Length; // bp
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v7 = 1;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_Z(0x26u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, SourceString);
  *a2 = 0LL;
  DestinationString.Length = *(_WORD *)SourceString;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, (PCUNICODE_STRING)SourceString, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v9 = ndisMiniDriverList;
    v10 = v8;
    while ( 1 )
    {
      if ( !v9 )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v10);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        if ( (unsigned __int8)byte_1C0085314 >= 4u )
          WPP_SF_q(0x27u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, *a2);
        return;
      }
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = (__int64)v9->MiniportQueue;
      if ( !MiniportQueue )
        goto LABEL_12;
      Length = DestinationString.Length;
      while ( a3 )
      {
        if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) == 0
          && Length == *(_WORD *)(MiniportQueue + 3864)
          && !memcmp(DestinationString.Buffer, *(const void **)(MiniportQueue + 3872), Length) )
        {
          goto LABEL_19;
        }
LABEL_11:
        MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
        if ( !MiniportQueue )
          goto LABEL_12;
      }
      if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) != 0 )
        goto LABEL_11;
      v11 = *(_QWORD *)(MiniportQueue + 3824);
      if ( !v11
        || *(_DWORD *)v11 < v7
        || Length != *(_WORD *)(v11 + 8)
        || memcmp(DestinationString.Buffer, *(const void **)(v11 + 16), Length) )
      {
        goto LABEL_11;
      }
      if ( *a2 )
      {
        ndisDereferenceMiniport(*a2, a4);
        *a2 = 0LL;
      }
      v7 = **(_DWORD **)(MiniportQueue + 3824);
LABEL_19:
      if ( ndisReferenceMiniport(MiniportQueue, a4) )
        *a2 = MiniportQueue;
LABEL_12:
      KeReleaseSpinLockFromDpcLevel(&v9->Ref.SpinLock);
      v9 = v9->NextDriver;
    }
  }
}
