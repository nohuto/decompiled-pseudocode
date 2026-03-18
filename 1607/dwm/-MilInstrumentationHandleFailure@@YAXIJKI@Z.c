/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140005480
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140001B30 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1400030F0 (__security_check_cookie.c)
 *     memset_0 @ 0x140003F02 (memset_0.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x140005344 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140005860 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure(__int64 a1, DWORD a2, unsigned int a3, int a4)
{
  bool v6; // si
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v6 = a2 == -2003303421;
  if ( (a3 & 0x10) != 0 && IsOOM(a2) )
    TerminateProcessOnMemoryExhaustion(0LL);
  if ( v6 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.ExceptionCode = a2;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2, a2, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
