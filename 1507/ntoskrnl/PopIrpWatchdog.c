/*
 * XREFs of PopIrpWatchdog @ 0x140233A0C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopIrpWatchdogBugcheck @ 0x140233A40 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  PopIrpWatchdogBugcheck(a2);
}
