/*
 * XREFs of EtwTraceUIPIMsgError @ 0x1C0076400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB54C (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB5E8 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIMsgError(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v7[7]; // [rsp+30h] [rbp-68h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x4000000000004000LL) != 0
    && (qword_1C01020B8 & 0x4000000000004000LL) == qword_1C01020B8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v7, 1u, 0LL, a1, 0LL, a2);
    v7[6] = a5;
    HIDWORD(v7[4]) = a3;
    v7[5] = a4;
    EtwpTraceUIPIError(&UIPIMsgEvent, v7, 0x38u);
  }
}
