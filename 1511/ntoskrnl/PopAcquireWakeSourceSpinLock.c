/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14011A800
 * Callers:
 *     PopDereferenceWakeInfos @ 0x14011A5D4 (PopDereferenceWakeInfos.c)
 *     PopGetCurrentWakeInfos @ 0x14011A654 (PopGetCurrentWakeInfos.c)
 *     PopTimeoutWakeTracking @ 0x14011A6EC (PopTimeoutWakeTracking.c)
 *     PopUpdateWakeSource @ 0x1401ECAD4 (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x1401ECBD0 (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x1403A5AF0 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
  PopWakeSourceLockOwner = (__int64)CurrentThread;
}
