/*
 * XREFs of PsSetCreateThreadNotifyRoutineEx @ 0x1406C6364
 * Callers:
 *     <none>
 * Callees:
 *     MmVerifyCallbackFunction @ 0x1405A72EC (MmVerifyCallbackFunction.c)
 */

__int64 __fastcall PsSetCreateThreadNotifyRoutineEx(int a1, unsigned __int64 a2)
{
  if ( a1 )
    return 3221225485LL;
  if ( MmVerifyCallbackFunction(a2) )
    return PspSetCreateThreadNotifyRoutine(a2, 1);
  return 3221225506LL;
}
