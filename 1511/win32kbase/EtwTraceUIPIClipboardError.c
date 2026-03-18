/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1C00ACAD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB54C (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB5E8 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIClipboardError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3, __int64 a4)
{
  int v4; // ebx
  int v6; // [rsp+34h] [rbp-64h]
  _DWORD v7[12]; // [rsp+38h] [rbp-60h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = a4;
  v6 = HIDWORD(a4);
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x4000000000004000LL) != 0
    && (qword_1C01020B8 & 0x4000000000004000LL) == qword_1C01020B8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v7, 6, 0LL, a1, 0LL, a2);
    v7[11] = v6;
    v7[9] = a3;
    v7[10] = v4;
    EtwpTraceUIPIError(&UIPIClipboardEvent, (ULONGLONG)v7, 0x30u);
  }
}
