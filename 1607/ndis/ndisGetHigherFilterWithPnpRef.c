/*
 * XREFs of ndisGetHigherFilterWithPnpRef @ 0x1C0015B70
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00156C0 (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFNetPnPEventInternal @ 0x1C009CA10 (ndisFNetPnPEventInternal.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 */

__int64 __fastcall ndisGetHigherFilterWithPnpRef(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2105691;
  if ( !a2 )
  {
    a2 = *(_QWORD *)(a1 + 2048);
    goto LABEL_3;
  }
  do
  {
    a2 = *(_QWORD *)(a2 + 120);
LABEL_3:
    ;
  }
  while ( a2 && !(unsigned __int8)ndisReferenceRef((PKSPIN_LOCK)(a2 + 312)) );
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return a2;
}
