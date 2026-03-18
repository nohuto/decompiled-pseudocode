/*
 * XREFs of MmSetAccessLogging @ 0x14011B6E8
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403A5E98 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x1403B20F0 (PfTSetTracingPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall MmSetAccessLogging(int a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1402FEDC0, &LockHandle);
  dword_1402FEDB0 = a2;
  dword_1402FED88 = a1;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !P )
      KiInsertQueueDpc((ULONG_PTR)&dword_1402FEF88, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    if ( stru_1402FED90.Parameter )
    {
      if ( stru_1402FED90.Parameter == (void *)2 )
        stru_1402FED90.Parameter = (void *)3;
    }
    else
    {
      stru_1402FED90.List.Flink = 0LL;
      stru_1402FED90.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_1402FED90.Parameter = (void *)1;
      ExQueueWorkItem(&stru_1402FED90, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
