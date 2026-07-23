/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x14013CE24
 * Callers:
 *     MiCountNonPagedPool @ 0x140101A3C (MiCountNonPagedPool.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14013CDDC (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1407A4498 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

void MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140324680, &LockHandle);
  if ( qword_1403236B0 )
  {
    v0 = MiState[0];
    v1 = qword_140326498;
    if ( qword_140326498 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_1403236B0->Header.SignalState )
        KeResetEvent(qword_1403236B0);
    }
    else if ( !qword_1403236B0->Header.SignalState )
    {
      KeSetEvent(qword_1403236B0, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_1403236A8->Header.SignalState )
        KeSetEvent(qword_1403236A8, 0, 0);
    }
    else if ( qword_1403236A8->Header.SignalState )
    {
      KeResetEvent(qword_1403236A8);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
