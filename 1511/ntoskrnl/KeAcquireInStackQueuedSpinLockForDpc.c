/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x14011B480
 * Callers:
 *     KeInsertDeviceQueue @ 0x14011B36C (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x14011B3E4 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1401C7880 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1401C7920 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1401C79EC (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1406C5C58 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
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
