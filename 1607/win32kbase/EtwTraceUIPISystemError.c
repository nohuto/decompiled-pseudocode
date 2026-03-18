/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C007B520
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C0072430 (NtUserSystemParametersInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00B4C54 (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00B4CF0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3)
{
  _DWORD v6[10]; // [rsp+30h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x4000000000004000LL) != 0
    && (qword_1C0118B18 & 0x4000000000004000LL) == qword_1C0118B18 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v6, 7u, 0LL, a1, 0LL, a2);
    v6[9] = a3;
    EtwpTraceUIPIError(&UIPISystemEvent, v6, 0x28u);
  }
}
