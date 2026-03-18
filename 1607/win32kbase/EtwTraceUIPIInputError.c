/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C007B180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00B4C54 (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00B4CF0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  _QWORD v8[6]; // [rsp+38h] [rbp-50h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x4000000000004000LL) != 0
    && (qword_1C0118B18 & 0x4000000000004000LL) == qword_1C0118B18 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v8, 5u, a1, 0LL, a2, 0LL);
    HIDWORD(v8[4]) = a5;
    v8[5] = a4;
    EtwpTraceUIPIError(&UIPIInputEvent, v8, 0x30u);
  }
}
