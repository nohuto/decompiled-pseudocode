/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x1405ADDBC
 * Callers:
 *     WdipSemCleanStart @ 0x1405ADD3C (WdipSemCleanStart.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     WdipSemSqmInit @ 0x1405ADE34 (WdipSemSqmInit.c)
 */

__int64 WdipSemStartTimeoutCheck()
{
  if ( !WdipTimeoutWorkEnabled )
  {
    WdipTimeoutWorkEnabled = 1;
    WdipSemSqmInit();
    KeInitializeTimerEx(&WdipTimeoutTimer, SynchronizationTimer);
    KeInitializeDpc(&WdipTimeoutDpc, (PKDEFERRED_ROUTINE)WdipTimeoutDpcRoutine, 0LL);
    WdipTimeoutWorkItem.Parameter = 0LL;
    WdipTimeoutWorkItem.List.Flink = 0LL;
    WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
    ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
