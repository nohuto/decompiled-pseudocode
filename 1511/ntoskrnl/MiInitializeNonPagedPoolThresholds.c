/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x1401331EC
 * Callers:
 *     MiPerformMemoryChange @ 0x1401D1E3C (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140133234 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140300DC0, &LockHandle);
  v0 = qword_1402FF7A0;
  if ( qword_1402FF7A0 > qword_140301390 )
    v0 = qword_140301390;
  MiState[0] = v0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return MiSignalNonPagedPoolWatchers();
}
