/*
 * XREFs of EtwTraceUIPIMsgError @ 0x1C007A660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00B4C54 (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00B4CF0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIMsgError(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v9[7]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x4000000000004000LL) != 0
    && (qword_1C0118B18 & 0x4000000000004000LL) == qword_1C0118B18 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v9, 1u, 0LL, a1, 0LL, a2);
    v9[6] = a5;
    HIDWORD(v9[4]) = a3;
    v9[5] = a4;
    EtwpTraceUIPIError(&UIPIMsgEvent, v9, 0x38u);
  }
}
