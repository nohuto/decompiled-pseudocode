/*
 * XREFs of PopResumeServices @ 0x14052FEE4
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400B06CC (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1404EF278 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopResumeServices(_DWORD *a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  a1[4] = 6;
  qword_1403038A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopCheckpointSystemSleep(39);
  PopDispatchStateCallout(a1, (__int64)&v3);
  qword_1403038A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  return PopCheckpointSystemSleep(40);
}
