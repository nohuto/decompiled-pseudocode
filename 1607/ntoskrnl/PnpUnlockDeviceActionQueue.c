/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x1401106F8
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1401106E8 (IoControlPnpDeviceActionQueue.c)
 *     PopFxChildDeviceActive @ 0x140202518 (PopFxChildDeviceActive.c)
 *     PopUpdateWakeSourceWorker @ 0x140205A18 (PopUpdateWakeSourceWorker.c)
 *     IoFreePoDeviceNotifyList @ 0x1403D08F8 (IoFreePoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x14079AB28 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
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
