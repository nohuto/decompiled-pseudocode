/*
 * XREFs of ndisGetLowerFilterWithPnpRef @ 0x1C001B130
 * Callers:
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB154 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00CDF90 (ndisFDevicePnPEventNotifyInternal.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 */

__int64 __fastcall ndisGetLowerFilterWithPnpRef(__int64 a1, __int64 i, unsigned __int8 a3)
{
  KIRQL v6; // bp

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2105735;
  if ( i )
    goto LABEL_5;
  for ( i = *(_QWORD *)(a1 + 2056); i && !ndisReferenceRef((PKSPIN_LOCK)(i + 312), a3); i = *(_QWORD *)(i + 112) )
LABEL_5:
    ;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  return i;
}
