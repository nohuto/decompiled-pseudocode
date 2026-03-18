/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1C00A85B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00A6FDC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00A7078 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIClipboardError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3, __int64 a4)
{
  int v4; // ebx
  int v6; // [rsp+34h] [rbp-64h]
  _DWORD v7[12]; // [rsp+38h] [rbp-60h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = a4;
  v6 = HIDWORD(a4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x4000000000004000LL) != 0
    && (qword_1C00FEA48 & 0x4000000000004000LL) == qword_1C00FEA48 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v7, 6, 0LL, a1, 0LL, a2);
    v7[11] = v6;
    v7[9] = a3;
    v7[10] = v4;
    EtwpTraceUIPIError(&UIPIClipboardEvent, (ULONGLONG)v7, 0x30u);
  }
}
