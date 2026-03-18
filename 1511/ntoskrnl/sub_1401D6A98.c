/*
 * XREFs of sub_1401D6A98 @ 0x1401D6A98
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1404B70E8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiSelectSessionAttachProcess @ 0x140091AC8 (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall sub_1401D6A98(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = MiSelectSessionAttachProcess(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
