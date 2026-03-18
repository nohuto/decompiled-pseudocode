/*
 * XREFs of PnpFindMountableDevice @ 0x14009EC90
 * Callers:
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140630334 (PnpQueryStopDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A0C8 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
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
