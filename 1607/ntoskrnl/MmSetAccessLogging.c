/*
 * XREFs of MmSetAccessLogging @ 0x140001EB8
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x1403DEDC4 (PfTSetTracingPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

void __fastcall MmSetAccessLogging(int a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327200, &LockHandle);
  dword_1403271F0 = a2;
  dword_1403271C8 = a1;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !P )
      KiInsertQueueDpc((ULONG_PTR)&dword_1403273C8, 0);
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
