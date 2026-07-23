/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x1400ACCCC
 * Callers:
 *     KeInsertDeviceQueue @ 0x1400ACBD8 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x1400ACC50 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1401D6658 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1401D66F8 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1401D67C4 (KeRemoveByKeyDeviceQueueIfBusy.c)
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
