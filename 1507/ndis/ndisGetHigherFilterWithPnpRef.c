/*
 * XREFs of ndisGetHigherFilterWithPnpRef @ 0x1C0017170
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C009B450 (ndisFNetPnPEventInternal.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 */

__int64 __fastcall ndisGetHigherFilterWithPnpRef(__int64 a1, __int64 i, unsigned __int8 a3)
{
  KIRQL v6; // r12
  char v7; // bp
  KIRQL v8; // r15
  unsigned __int16 v9; // cx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2105754;
  if ( i )
    goto LABEL_9;
  for ( i = *(_QWORD *)(a1 + 2048); i; i = *(_QWORD *)(i + 120) )
  {
    v7 = 0;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 312));
    if ( !*(_BYTE *)(i + 322) )
    {
      v9 = *(_WORD *)(i + 320);
      if ( v9 < 0xFFEBu )
      {
        *(_WORD *)(i + 320) = v9 + 1;
        ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(i + 328), a3);
        v7 = 1;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(i + 312), v8);
    if ( v7 )
      break;
LABEL_9:
    ;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  return i;
}
