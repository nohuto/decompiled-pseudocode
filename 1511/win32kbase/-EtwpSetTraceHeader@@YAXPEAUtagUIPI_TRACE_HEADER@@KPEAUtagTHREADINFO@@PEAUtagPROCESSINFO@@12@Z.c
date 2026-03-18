/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB54C
 * Callers:
 *     EtwTraceUIPIMsgError @ 0x1C0076400 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIInputError @ 0x1C00765E0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPISystemError @ 0x1C00778E0 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C007AC30 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C007C70C (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00ACAD0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00ACBB0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     ?EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z @ 0x1C00AB584 (-EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall EtwpSetTraceHeader(
        struct tagUIPI_TRACE_HEADER *a1,
        int a2,
        struct tagTHREADINFO *a3,
        struct tagPROCESSINFO *a4,
        struct tagTHREADINFO *a5,
        struct tagPROCESSINFO *a6)
{
  *(_DWORD *)a1 = a2;
  EtwpSetUIPIProcessInfo((struct tagUIPI_TRACE_HEADER *)((char *)a1 + 4), a3, a4);
  EtwpSetUIPIProcessInfo((struct tagUIPI_TRACE_HEADER *)((char *)a1 + 20), a5, a6);
}
