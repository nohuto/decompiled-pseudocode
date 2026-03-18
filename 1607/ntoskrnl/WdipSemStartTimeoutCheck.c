/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x140564810
 * Callers:
 *     WdipSemCleanStart @ 0x140564790 (WdipSemCleanStart.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ExAllocateTimer @ 0x140132AA0 (ExAllocateTimer.c)
 *     WdipSemSqmInit @ 0x140564898 (WdipSemSqmInit.c)
 */

__int64 WdipSemStartTimeoutCheck()
{
  if ( !WdipTimeoutWorkEnabled )
  {
    WdipTimeoutWorkEnabled = 1;
    WdipSemSqmInit();
    WdipTimeoutTimer = ExAllocateTimer((__int64)WdipTimeoutTimerRoutine, 0LL, 8u);
    if ( WdipTimeoutTimer )
    {
      WdipTimeoutWorkItem.Parameter = 0LL;
      WdipTimeoutWorkItem.List.Flink = 0LL;
      qword_1402FDB68 = -1LL;
      WdipTimeoutTimerParameters = 0LL;
      WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
      ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
    }
  }
  return 0LL;
}
