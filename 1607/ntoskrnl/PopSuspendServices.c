/*
 * XREFs of PopSuspendServices @ 0x14052FFC8
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400B06CC (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1404EF278 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopSuspendServices(_DWORD *a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  PopCheckpointSystemSleep(4);
  a1[4] = 3;
  PopDispatchStateCallout(a1, (__int64)&v3);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  return PopCheckpointSystemSleep(5);
}
