/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1401491E4
 * Callers:
 *     PopDereferenceWakeInfos @ 0x140148FB8 (PopDereferenceWakeInfos.c)
 *     PopGetCurrentWakeInfos @ 0x140149038 (PopGetCurrentWakeInfos.c)
 *     PopTimeoutWakeTracking @ 0x1401490D0 (PopTimeoutWakeTracking.c)
 *     PopUpdateWakeSource @ 0x14023AD90 (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x14023AE8C (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x1403EF2D0 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
  PopWakeSourceLockOwner = (__int64)CurrentThread;
}
