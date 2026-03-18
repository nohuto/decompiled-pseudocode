/*
 * XREFs of PnpLockMountableDevice @ 0x1401FB32C
 * Callers:
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14058DA8C (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140680E54 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
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
