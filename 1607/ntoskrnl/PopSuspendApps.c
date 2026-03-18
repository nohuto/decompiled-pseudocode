/*
 * XREFs of PopSuspendApps @ 0x14053001C
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400B06CC (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1404EF278 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopSuspendApps(_DWORD *a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  PopCheckpointSystemSleep(2);
  a1[4] = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  return PopCheckpointSystemSleep(3);
}
