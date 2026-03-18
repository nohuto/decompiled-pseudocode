/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x140124628
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140124618 (IoControlPnpDeviceActionQueue.c)
 *     PopFxChildDeviceActive @ 0x1401E9B40 (PopFxChildDeviceActive.c)
 *     PopUpdateWakeSourceWorker @ 0x1401ECBD0 (PopUpdateWakeSourceWorker.c)
 *     IoFreePoDeviceNotifyList @ 0x1403A5CA4 (IoFreePoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

__int64 PnpUnlockDeviceActionQueue()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( PnpEnumerationRequestList == &PnpEnumerationRequestList )
  {
    PnpEnumerationInProgress = 0;
    KeSetEvent(&PnpEnumerationLock, 0, 0);
  }
  else
  {
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  KeReleaseSpinLock(&PnpSpinLock, v0);
  return PpDevNodeUnlockTree(1LL);
}
