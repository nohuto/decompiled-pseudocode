/*
 * XREFs of ?EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z @ 0x1C00B4C8C
 * Callers:
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00B4C54 (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpSetUIPIProcessInfo(struct tagUIPI_PROCESS_INFO *a1, PETHREAD *a2, PEPROCESS *a3)
{
  if ( a2 )
  {
    *((_DWORD *)a1 + 1) = (unsigned int)PsGetThreadId(*a2);
    a3 = (PEPROCESS *)a2[47];
  }
  if ( a3 )
  {
    *(_DWORD *)a1 = (unsigned int)PsGetProcessId(*a3);
    *((_DWORD *)a1 + 2) = *((_DWORD *)a3 + 206);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a3 + 207);
  }
}
