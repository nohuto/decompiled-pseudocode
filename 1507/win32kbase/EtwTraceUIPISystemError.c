/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C0014BA0
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00A6FDC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00A7078 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3)
{
  _DWORD v4[10]; // [rsp+30h] [rbp-48h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x4000000000004000LL) != 0
    && (qword_1C00FEA48 & 0x4000000000004000LL) == qword_1C00FEA48 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v4, 7u, 0LL, a1, 0LL, a2);
    v4[9] = a3;
    EtwpTraceUIPIError(&UIPISystemEvent, v4, 0x28u);
  }
}
