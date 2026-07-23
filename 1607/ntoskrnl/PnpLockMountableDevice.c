/*
 * XREFs of PnpLockMountableDevice @ 0x1401CDBB8
 * Callers:
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1406303E8 (PnpQueryStopDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A1AC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
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
