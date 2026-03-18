/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C00778E0
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C005EBE0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB54C (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB5E8 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3)
{
  _DWORD v4[10]; // [rsp+30h] [rbp-48h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x4000000000004000LL) != 0
    && (qword_1C01020B8 & 0x4000000000004000LL) == qword_1C01020B8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v4, 7u, 0LL, a1, 0LL, a2);
    v4[9] = a3;
    EtwpTraceUIPIError(&UIPISystemEvent, v4, 0x28u);
  }
}
