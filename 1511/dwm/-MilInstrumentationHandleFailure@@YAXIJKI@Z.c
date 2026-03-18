/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140004E1C
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140001A00 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x140004CD8 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140004EC8 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure(__int64 a1, UINT a2, unsigned int a3, int a4)
{
  HANDLE CurrentProcess; // rax

  if ( (a3 & 4) != 0 )
    DoStackCapture(2, a2, a4);
  if ( (a3 & 0x10) != 0 && IsOOM(a2) && !IsDebuggerPresent() )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, a2);
  }
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
