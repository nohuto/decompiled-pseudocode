/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x1404F8CA4
 * Callers:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
