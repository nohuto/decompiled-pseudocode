/*
 * XREFs of MiLockAndSelectSessionAttachProcess @ 0x1401E858C
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSelectSessionAttachProcess @ 0x1400767C8 (MiSelectSessionAttachProcess.c)
 */

_QWORD *__fastcall MiLockAndSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v2 = MiSelectSessionAttachProcess(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
