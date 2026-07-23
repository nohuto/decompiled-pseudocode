/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x14013CDDC
 * Callers:
 *     MiPerformMemoryChange @ 0x1401E1F9C (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14013CE24 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140324680, &LockHandle);
  v0 = qword_1403278A0;
  if ( qword_1403278A0 > qword_140324E10 )
    v0 = qword_140324E10;
  MiState[0] = v0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return MiSignalNonPagedPoolWatchers();
}
