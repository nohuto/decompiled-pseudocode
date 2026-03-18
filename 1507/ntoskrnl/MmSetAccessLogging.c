/*
 * XREFs of MmSetAccessLogging @ 0x140100EDC
 * Callers:
 *     PfTAccessTracingStart @ 0x1403EBE7C (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     PfTSetTracingPriority @ 0x1404031C0 (PfTSetTracingPriority.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

void __fastcall MmSetAccessLogging(int a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14034F280, &LockHandle);
  dword_14034F270 = a2;
  dword_14034F248 = a1;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !P )
      KiInsertQueueDpc((__int64)&dword_14034F448, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    if ( stru_14034F250.Parameter )
    {
      if ( stru_14034F250.Parameter == (void *)2 )
        stru_14034F250.Parameter = (void *)3;
    }
    else
    {
      stru_14034F250.List.Flink = 0LL;
      stru_14034F250.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_14034F250.Parameter = (void *)1;
      ExQueueWorkItem(&stru_14034F250, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
