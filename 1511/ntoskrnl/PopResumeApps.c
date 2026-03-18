/*
 * XREFs of PopResumeApps @ 0x1404F86B4
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeApps(_DWORD *a1)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_1402DE600 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopDispatchStateCallout(a1, 0LL);
  qword_1402DE608 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
}
