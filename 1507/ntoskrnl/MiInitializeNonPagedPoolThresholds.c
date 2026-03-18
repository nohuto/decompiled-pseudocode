/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x14015FB98
 * Callers:
 *     MiPerformMemoryChange @ 0x140212ECC (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14015FBE0 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140354CC0, &LockHandle);
  v0 = qword_14034FC60;
  if ( qword_14034FC60 > qword_1403551D0 )
    v0 = qword_1403551D0;
  MiState[0] = v0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return MiSignalNonPagedPoolWatchers();
}
