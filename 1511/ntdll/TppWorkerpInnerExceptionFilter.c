/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x1800F58D4
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     TppExceptionFilter @ 0x1800F5534 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1800F56FC (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(int **a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int *v6; // rcx

  result = TppExceptionFilter((__int64)a1);
  if ( !(_DWORD)result )
    *a3 = 1;
  if ( (_DWORD)result == 1 )
  {
    v6 = *a1;
    if ( **a1 != -1073741571 )
    {
      if ( *v6 <= -1073740022 || *v6 > -1073740018 && *v6 != -1073740016 )
      {
        TppTerminateProcess();
        JUMPOUT(0x1800F5931LL);
      }
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
