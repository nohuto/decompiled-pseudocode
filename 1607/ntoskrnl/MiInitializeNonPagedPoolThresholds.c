/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x14013C86C
 * Callers:
 *     MiPerformMemoryChange @ 0x1401E2170 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14013C8B4 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140324640, &LockHandle);
  v0 = qword_140327860;
  if ( qword_140327860 > qword_140324DD0 )
    v0 = qword_140324DD0;
  MiState[0] = v0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return MiSignalNonPagedPoolWatchers();
}
