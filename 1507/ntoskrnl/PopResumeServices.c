/*
 * XREFs of PopResumeServices @ 0x140567474
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeServices(_DWORD *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  a1[4] = 6;
  qword_14032EBD0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopDispatchStateCallout(a1, (__int64)&v2);
  qword_14032EBD8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
}
