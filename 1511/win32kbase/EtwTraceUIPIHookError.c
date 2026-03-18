/*
 * XREFs of EtwTraceUIPIHookError @ 0x1C00ACBB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB54C (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB5E8 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIHookError(
        __int64 a1,
        char a2,
        struct tagTHREADINFO *a3,
        struct tagTHREADINFO *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD v9[8]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x4000000000004000LL) != 0
    && (qword_1C01020B8 & 0x4000000000004000LL) == qword_1C01020B8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v9, 2, a3, 0LL, a4, 0LL);
    HIDWORD(v9[4]) = a5;
    HIDWORD(v9[5]) = a6;
    v9[6] = a7;
    v9[7] = a8;
    LOBYTE(v9[5]) = a2;
    EtwpTraceUIPIError(&UIPIHookEvent, (ULONGLONG)v9, 0x40u);
  }
}
