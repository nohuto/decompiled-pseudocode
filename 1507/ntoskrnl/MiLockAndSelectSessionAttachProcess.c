/*
 * XREFs of MiLockAndSelectSessionAttachProcess @ 0x140218F78
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiSelectSessionAttachProcess @ 0x1400FD6CC (MiSelectSessionAttachProcess.c)
 */

_QWORD *__fastcall MiLockAndSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = MiSelectSessionAttachProcess(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
