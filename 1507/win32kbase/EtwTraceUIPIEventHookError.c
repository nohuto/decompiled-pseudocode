/*
 * XREFs of EtwTraceUIPIEventHookError @ 0x1C0016AD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00A6FDC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00A7078 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIEventHookError(__int64 a1, struct tagTHREADINFO *a2, struct tagTHREADINFO *a3)
{
  _QWORD v4[10]; // [rsp+30h] [rbp-78h] BYREF

  memset(v4, 0, 72);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x4000000000004000LL) != 0
    && (qword_1C00FEA48 & 0x4000000000004000LL) == qword_1C00FEA48 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v4, 3u, a2, 0LL, a3, 0LL);
    HIDWORD(v4[4]) = *(_DWORD *)(a1 + 16);
    v4[5] = *(_QWORD *)(a1 + 24);
    v4[6] = *(_QWORD *)(a1 + 32);
    v4[7] = *(_QWORD *)(a1 + 40);
    LODWORD(v4[8]) = *(_DWORD *)(a1 + 48);
    EtwpTraceUIPIError(&UIPIEventHookEvent, v4, 0x48u);
  }
}
