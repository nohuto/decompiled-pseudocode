/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x14011B460
 * Callers:
 *     KeInsertDeviceQueue @ 0x14011B36C (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x14011B3E4 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1401C7880 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1401C7920 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1401C79EC (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1406C62A0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
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
