/*
 * XREFs of MmSetAccessLogging @ 0x140001D44
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x1403DEDC4 (PfTSetTracingPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

void __fastcall MmSetAccessLogging(int a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403271C0, &LockHandle);
  dword_1403271B0 = a2;
  dword_140327188 = a1;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !P )
      KiInsertQueueDpc((ULONG_PTR)&dword_140327388, 0);
  }
  else
  {
    if ( WorkItem.Parameter )
    {
      if ( WorkItem.Parameter == (void *)2 )
        WorkItem.Parameter = (void *)3;
    }
    else
    {
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      WorkItem.Parameter = (void *)1;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
