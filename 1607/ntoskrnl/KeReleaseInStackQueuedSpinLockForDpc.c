/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x1400AE764
 * Callers:
 *     KeInsertDeviceQueue @ 0x1400AE670 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x1400AE6E8 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1401D682C (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1401D68CC (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1401D6998 (KeRemoveByKeyDeviceQueueIfBusy.c)
 * Callees:
 *     <none>
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(LockHandle);
  else
    KxReleaseQueuedSpinLock((volatile signed __int64 **)LockHandle);
}
