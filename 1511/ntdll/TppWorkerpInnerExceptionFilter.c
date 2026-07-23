/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x1800F58D4
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     TppExceptionFilter @ 0x1800F5534 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1800F56FC (TppTerminateProcess.c)
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
        JUMPOUT(0x1800F5931LL);
      }
      return -1;
    }
  }
  return result;
}
