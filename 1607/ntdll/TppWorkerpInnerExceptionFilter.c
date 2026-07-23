/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x180090ECC
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     TppExceptionFilter @ 0x180090EF4 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1800FE668 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int *p_ExceptionCode; // rcx

  result = TppExceptionFilter(a1);
  if ( !(_DWORD)result )
    *a3 = 1;
  if ( (_DWORD)result == 1 )
  {
    p_ExceptionCode = &a1->ExceptionRecord->ExceptionCode;
    if ( a1->ExceptionRecord->ExceptionCode != -1073741571 )
    {
      if ( *p_ExceptionCode <= -1073740022 || *p_ExceptionCode > -1073740018 && *p_ExceptionCode != -1073740016 )
      {
        TppTerminateProcess(a1);
        JUMPOUT(0x1800CE8C0LL);
      }
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
