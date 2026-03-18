/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00A6FDC
 * Callers:
 *     EtwTraceUIPIInputError @ 0x1C00127B0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIMsgError @ 0x1C0013F50 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPISystemError @ 0x1C0014BA0 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C0016AD0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0018A0C (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00A85B0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00A8690 (EtwTraceUIPIHookError.c)
 * Callees:
 *     ?EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A7014 (-EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z.c)
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
