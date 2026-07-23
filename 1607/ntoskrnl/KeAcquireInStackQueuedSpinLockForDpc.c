/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x1400ACCEC
 * Callers:
 *     KeInsertDeviceQueue @ 0x1400ACBD8 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x1400ACC50 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1401D6658 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1401D66F8 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1401D67C4 (KeRemoveByKeyDeviceQueueIfBusy.c)
 * Callees:
 *     <none>
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, LockHandle);
}
