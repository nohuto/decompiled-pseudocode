/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x18008D1F0
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x18008D248 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x18008D270 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180128FFC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure(__int64 a1, UINT a2, unsigned int a3, unsigned int a4)
{
  HANDLE CurrentProcess; // rax

  if ( (a3 & 4) != 0 )
    DoStackCapture(2u, a2, a4);
  if ( (a3 & 0x10) != 0 && IsOOM(a2) && !IsDebuggerPresent() )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, a2);
  }
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
