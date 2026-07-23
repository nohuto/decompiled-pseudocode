/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x1800F5ED4
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     TppExceptionFilter @ 0x1800F5B34 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1800F5CFC (TppTerminateProcess.c)
 */

LONG __fastcall TppWorkerpInnerExceptionFilter(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  LONG result; // eax
  int *p_ExceptionCode; // rcx

  result = TppExceptionFilter(a1);
  if ( !result )
    *a3 = 1;
  if ( result == 1 )
  {
    p_ExceptionCode = &a1->ExceptionRecord->ExceptionCode;
    if ( a1->ExceptionRecord->ExceptionCode != -1073741571 )
    {
      if ( *p_ExceptionCode <= -1073740022 || *p_ExceptionCode > -1073740018 && *p_ExceptionCode != -1073740016 )
      {
        TppTerminateProcess((NTSTATUS **)a1);
        JUMPOUT(0x1800F5F31LL);
      }
      return -1;
    }
  }
  return result;
}
