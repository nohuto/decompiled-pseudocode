/*
 * XREFs of PsSetCreateThreadNotifyRoutineEx @ 0x1406435C4
 * Callers:
 *     <none>
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401CF300 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall PsSetCreateThreadNotifyRoutineEx(int a1, unsigned __int64 a2)
{
  if ( a1 )
    return 3221225485LL;
  if ( (unsigned int)MmVerifyCallbackFunctionCheckFlags(a2, 32) )
    return PspSetCreateThreadNotifyRoutine(a2, 1);
  return 3221225506LL;
}
