/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x14015FBE0
 * Callers:
 *     MiCountNonPagedPool @ 0x140064D84 (MiCountNonPagedPool.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14015FB98 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1407CAE44 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

void MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140354CC0, &LockHandle);
  if ( qword_140353E38 )
  {
    v0 = MiState[0];
    v1 = qword_14034E658;
    if ( qword_14034E658 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_140353E38->Header.SignalState )
        KeResetEvent(qword_140353E38);
    }
    else if ( !qword_140353E38->Header.SignalState )
    {
      KeSetEvent(qword_140353E38, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140353E30->Header.SignalState )
        KeSetEvent(qword_140353E30, 0, 0);
    }
    else if ( qword_140353E30->Header.SignalState )
    {
      KeResetEvent(qword_140353E30);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
