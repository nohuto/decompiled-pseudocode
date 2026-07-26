/*
 * XREFs of ndisReferenceMiniportByName @ 0x1C00E30F8
 * Callers:
 *     NdisEnumerateFilterModules @ 0x1C0052790 (NdisEnumerateFilterModules.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C0059354 (ndisIMDeleteIfStackEntry.c)
 *     ndisWmiQuerySingleInstance @ 0x1C009F180 (ndisWmiQuerySingleInstance.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00C63D0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00C6B0C (ndisHandleBindNotification.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00CFBFC (ndisWmiQueryAllData.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(__int64 *SourceString, __int64 *a2, char a3, unsigned __int8 a4)
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
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_Z(0x26u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, SourceString);
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
        if ( (unsigned __int8)byte_1C0083714 >= 4u )
          WPP_SF_q(0x27u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, *a2);
        return;
      }
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = (__int64)v9->MiniportQueue;
      if ( !MiniportQueue )
        goto LABEL_10;
      Length = DestinationString.Length;
      while ( a3 )
      {
        if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) == 0
          && Length == *(_WORD *)(MiniportQueue + 3864)
          && !memcmp(DestinationString.Buffer, *(const void **)(MiniportQueue + 3872), Length) )
        {
          goto LABEL_8;
        }
LABEL_20:
        MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
        if ( !MiniportQueue )
          goto LABEL_10;
      }
      if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) != 0 )
        goto LABEL_20;
      v13 = *(_QWORD *)(MiniportQueue + 3824);
      if ( !v13
        || *(_DWORD *)v13 < v7
        || Length != *(_WORD *)(v13 + 8)
        || memcmp(DestinationString.Buffer, *(const void **)(v13 + 16), Length) )
      {
        goto LABEL_20;
      }
      if ( *a2 )
      {
        ndisDereferenceMiniport(*a2, a4);
        *a2 = 0LL;
      }
      v7 = **(_DWORD **)(MiniportQueue + 3824);
LABEL_8:
      if ( ndisReferenceMiniport(MiniportQueue) )
        *a2 = MiniportQueue;
LABEL_10:
      KeReleaseSpinLockFromDpcLevel(&v9->Ref.SpinLock);
      v9 = v9->NextDriver;
    }
  }
}
