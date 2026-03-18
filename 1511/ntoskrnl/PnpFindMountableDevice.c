/*
 * XREFs of PnpFindMountableDevice @ 0x1400DA848
 * Callers:
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1406060FC (PnpQueryStopDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x140615674 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall PnpFindMountableDevice(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}
