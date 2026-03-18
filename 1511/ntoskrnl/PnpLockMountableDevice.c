/*
 * XREFs of PnpLockMountableDevice @ 0x1401BF7E4
 * Callers:
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1406060FC (PnpQueryStopDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x140615674 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall PnpLockMountableDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( v1[7] )
        KeWaitForSingleObject(v1 + 35, Executive, 0, 0, 0LL);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = (_QWORD *)v1[3];
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
