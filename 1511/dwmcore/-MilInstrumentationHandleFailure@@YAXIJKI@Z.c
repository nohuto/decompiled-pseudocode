/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x1800B1CBC
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1800B1D14 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800B1D3C (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18013EE98 (-MilInstrumentationBreak@@YAXK_N@Z.c)
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
