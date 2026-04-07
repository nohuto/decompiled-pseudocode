/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x18009AD60
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x18009ABFC (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18009AD38 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009B0F0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure(__int64 a1, DWORD a2, unsigned int a3, int a4)
{
  bool v6; // si
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

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
