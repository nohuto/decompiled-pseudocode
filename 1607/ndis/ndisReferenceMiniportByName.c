/*
 * XREFs of ndisReferenceMiniportByName @ 0x1C00E81F0
 * Callers:
 *     NdisEnumerateFilterModules @ 0x1C0057280 (NdisEnumerateFilterModules.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005D7F8 (ndisIMDeleteIfStackEntry.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A9BF4 (ndisWmiQuerySingleInstance.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CBE70 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00CC5AC (ndisHandleBindNotification.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     memcmp @ 0x1C00270A0 (memcmp.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(PCUNICODE_STRING SourceString, __int64 *a2, char a3, unsigned __int8 a4)
{
  unsigned int v7; // r12d
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rsi
  KIRQL v10; // r13
  __int64 MiniportQueue; // rbx
  unsigned __int16 Length; // bp
  __int64 v13; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v7 = 1;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_Z(0x26u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, &SourceString->Length);
  *a2 = 0LL;
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v9 = ndisMiniDriverList;
    v10 = v8;
    while ( 1 )
    {
      if ( !v9 )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v10);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        if ( (unsigned __int8)byte_1C00895D4 >= 4u )
          WPP_SF_q(0x27u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, *a2);
        return;
      }
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = (__int64)v9->MiniportQueue;
      if ( !MiniportQueue )
        goto LABEL_19;
      Length = DestinationString.Length;
      while ( a3 )
      {
        if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) == 0
          && Length == *(_WORD *)(MiniportQueue + 3864)
          && !memcmp(DestinationString.Buffer, *(const void **)(MiniportQueue + 3872), Length) )
        {
          goto LABEL_17;
        }
LABEL_22:
        MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
        if ( !MiniportQueue )
          goto LABEL_19;
      }
      if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) != 0 )
        goto LABEL_22;
      v13 = *(_QWORD *)(MiniportQueue + 3824);
      if ( !v13
        || *(_DWORD *)v13 < v7
        || Length != *(_WORD *)(v13 + 8)
        || memcmp(DestinationString.Buffer, *(const void **)(v13 + 16), Length) )
      {
        goto LABEL_22;
      }
      if ( *a2 )
      {
        ndisDereferenceMiniport(*a2);
        *a2 = 0LL;
      }
      v7 = **(_DWORD **)(MiniportQueue + 3824);
LABEL_17:
      if ( ndisReferenceMiniport(MiniportQueue, a4) )
        *a2 = MiniportQueue;
LABEL_19:
      KeReleaseSpinLockFromDpcLevel(&v9->Ref.SpinLock);
      v9 = v9->NextDriver;
    }
  }
}
