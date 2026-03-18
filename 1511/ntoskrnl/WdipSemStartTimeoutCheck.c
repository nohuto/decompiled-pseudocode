/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x1405328D8
 * Callers:
 *     WdipSemCleanStart @ 0x140532858 (WdipSemCleanStart.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     WdipSemSqmInit @ 0x140532950 (WdipSemSqmInit.c)
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
