/*
 * XREFs of PnpLockDeviceActionQueue @ 0x1401246B4
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140124618 (IoControlPnpDeviceActionQueue.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403A338C (IoBuildPoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 */

void PnpLockDeviceActionQueue()
{
  KIRQL v0; // al
  KIRQL v1; // bl

  while ( 1 )
  {
    PpDevNodeLockTree(1LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v1 = v0;
    if ( !PnpEnumerationInProgress )
      break;
    KeReleaseSpinLock(&PnpSpinLock, v0);
    PpDevNodeUnlockTree(1LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  }
  PnpEnumerationInProgress = 1;
  KeResetEvent(&PnpEnumerationLock);
  KeReleaseSpinLock(&PnpSpinLock, v1);
}
