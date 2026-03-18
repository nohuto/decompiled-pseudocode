/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C00127B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00A6FDC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00A7078 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  _QWORD v6[6]; // [rsp+38h] [rbp-50h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x4000000000004000LL) != 0
    && (qword_1C00FEA48 & 0x4000000000004000LL) == qword_1C00FEA48 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v6, 5u, a1, 0LL, a2, 0LL);
    HIDWORD(v6[4]) = a5;
    v6[5] = a4;
    EtwpTraceUIPIError(&UIPIInputEvent, v6, 0x30u);
  }
}
