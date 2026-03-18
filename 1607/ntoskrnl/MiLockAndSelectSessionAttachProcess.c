/*
 * XREFs of MiLockAndSelectSessionAttachProcess @ 0x1401E8760
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSelectSessionAttachProcess @ 0x140076748 (MiSelectSessionAttachProcess.c)
 */

_QWORD *__fastcall MiLockAndSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  v2 = MiSelectSessionAttachProcess(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
