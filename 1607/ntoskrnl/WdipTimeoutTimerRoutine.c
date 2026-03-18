/*
 * XREFs of WdipTimeoutTimerRoutine @ 0x1400B4ED4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}
