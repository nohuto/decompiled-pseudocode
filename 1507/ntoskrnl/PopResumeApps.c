/*
 * XREFs of PopResumeApps @ 0x140567418
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeApps(_DWORD *a1)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_14032EBC0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopDispatchStateCallout(a1, 0LL);
  qword_14032EBC8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
}
