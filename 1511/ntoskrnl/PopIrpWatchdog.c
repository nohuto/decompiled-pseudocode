/*
 * XREFs of PopIrpWatchdog @ 0x1401E68D4
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PopIrpWatchdogBugcheck @ 0x1401E6908 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  PopIrpWatchdogBugcheck(a2);
}
