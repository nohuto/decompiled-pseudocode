/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x14013C8B4
 * Callers:
 *     MiCountNonPagedPool @ 0x140103CBC (MiCountNonPagedPool.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14013C86C (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1407A4498 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

void MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140324640, &LockHandle);
  if ( qword_140323670 )
  {
    v0 = MiState[0];
    v1 = qword_140326458;
    if ( qword_140326458 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_140323670->Header.SignalState )
        KeResetEvent(qword_140323670);
    }
    else if ( !qword_140323670->Header.SignalState )
    {
      KeSetEvent(qword_140323670, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140323668->Header.SignalState )
        KeSetEvent(qword_140323668, 0, 0);
    }
    else if ( qword_140323668->Header.SignalState )
    {
      KeResetEvent(qword_140323668);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
