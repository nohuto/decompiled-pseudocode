/*
 * XREFs of RtlDeleteTimerQueue @ 0x1800F5F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDeleteTimerQueue(HANDLE TimerQueueHandle)
{
  return RtlDeleteTimerQueueEx(TimerQueueHandle, 0LL);
}
