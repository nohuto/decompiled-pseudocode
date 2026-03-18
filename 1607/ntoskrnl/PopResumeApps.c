/*
 * XREFs of PopResumeApps @ 0x14052FF58
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400B06CC (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1404EF278 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopResumeApps(_DWORD *a1)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_140303890 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopCheckpointSystemSleep(37);
  PopDispatchStateCallout(a1, 0LL);
  qword_140303898 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  return PopCheckpointSystemSleep(38);
}
