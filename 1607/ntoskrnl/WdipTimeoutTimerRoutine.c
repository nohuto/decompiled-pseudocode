/*
 * XREFs of WdipTimeoutTimerRoutine @ 0x1400B2D0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}
