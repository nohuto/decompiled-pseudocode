/*
 * XREFs of PnpLockDeviceActionQueue @ 0x140110784
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1401106E8 (IoControlPnpDeviceActionQueue.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403D183C (IoBuildPoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x14079AB28 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
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
