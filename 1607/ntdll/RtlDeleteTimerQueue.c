/*
 * XREFs of RtlDeleteTimerQueue @ 0x1800FE850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDeleteTimerQueue(HANDLE TimerQueueHandle)
{
  return RtlDeleteTimerQueueEx(TimerQueueHandle, 0LL);
}
