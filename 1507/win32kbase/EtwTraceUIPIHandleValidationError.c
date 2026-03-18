/*
 * XREFs of EtwTraceUIPIHandleValidationError @ 0x1C0018A0C
 * Callers:
 *     ValidateHwndEx @ 0x1C0033450 (ValidateHwndEx.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C004F908 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00A6FDC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00A7078 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIHandleValidationError(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        __int64 a3,
        int a4)
{
  _QWORD v6[7]; // [rsp+30h] [rbp-68h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x4000000000004000LL) != 0
    && (qword_1C00FEA48 & 0x4000000000004000LL) == qword_1C00FEA48 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v6, 4u, 0LL, a1, 0LL, a2);
    LODWORD(v6[6]) = a4;
    v6[5] = a3;
    EtwpTraceUIPIError(&UIPIHandleValEvent, v6, 0x38u);
  }
}
