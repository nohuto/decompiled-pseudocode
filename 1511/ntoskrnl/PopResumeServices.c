/*
 * XREFs of PopResumeServices @ 0x1404F8710
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeServices(_DWORD *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  a1[4] = 6;
  qword_1402DE610 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopDispatchStateCallout(a1, (__int64)&v2);
  qword_1402DE618 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
}
