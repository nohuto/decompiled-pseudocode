/*
 * XREFs of PnpUnlockMountableDevice @ 0x1401CDCE8
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PnpCancelStopDeviceNode @ 0x14062FFD4 (PnpCancelStopDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A1AC (PiIrpQueryRemoveDevice.c)
 *     PipProcessRestartPhase1 @ 0x14064DFC0 (PipProcessRestartPhase1.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
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
