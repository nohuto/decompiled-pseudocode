/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140133234
 * Callers:
 *     MiCountNonPagedPool @ 0x1400B46D4 (MiCountNonPagedPool.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1401331EC (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14074D074 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp+0h] BYREF

  KeAcquireInStackQueuedSpinLock(
    &qword_140300DC0,
    (PKLOCK_QUEUE_HANDLE)((unsigned __int64)&LockHandle & 0xFFFFFFFFFFFFFFE0uLL));
  if ( qword_1402FFE68 )
  {
    v0 = MiState[0];
    v1 = qword_1402FE198;
    if ( qword_1402FE198 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_1402FFE68->Header.SignalState )
        KeResetEvent(qword_1402FFE68);
    }
    else if ( !qword_1402FFE68->Header.SignalState )
    {
      KeSetEvent(qword_1402FFE68, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_1402FFE60->Header.SignalState )
        KeSetEvent(qword_1402FFE60, 0, 0);
    }
    else if ( qword_1402FFE60->Header.SignalState )
    {
      KeResetEvent(qword_1402FFE60);
    }
  }
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((unsigned __int64)&LockHandle & 0xFFFFFFFFFFFFFFE0uLL));
}
