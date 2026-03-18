/*
 * XREFs of PnpUnlockMountableDevice @ 0x1401FB45C
 * Callers:
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14058DA8C (PiIrpQueryRemoveDevice.c)
 *     PnpCancelStopDeviceNode @ 0x140680AE4 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x140697318 (PipProcessRestartPhase1.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

void __fastcall PnpUnlockMountableDevice(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( *(_QWORD *)(v1 + 56) )
        KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = *(_QWORD *)(v1 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
