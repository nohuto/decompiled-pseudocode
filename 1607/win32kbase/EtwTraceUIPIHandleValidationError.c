/*
 * XREFs of EtwTraceUIPIHandleValidationError @ 0x1C0080F58
 * Callers:
 *     ValidateHwndEx @ 0x1C0020B00 (ValidateHwndEx.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0038A6C (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00B4C54 (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00B4CF0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIHandleValidationError(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        __int64 a3,
        int a4)
{
  _QWORD v8[7]; // [rsp+30h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x4000000000004000LL) != 0
    && (qword_1C0118B18 & 0x4000000000004000LL) == qword_1C0118B18 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v8, 4u, 0LL, a1, 0LL, a2);
    LODWORD(v8[6]) = a4;
    v8[5] = a3;
    EtwpTraceUIPIError(&UIPIHandleValEvent, v8, 0x38u);
  }
}
