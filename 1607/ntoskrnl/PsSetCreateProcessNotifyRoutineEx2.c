/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx2 @ 0x140575E44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsSetCreateProcessNotifyRoutineEx2(int a1, __int64 a2, char a3)
{
  __int64 v4; // rdx

  if ( a1 )
    return 3221225485LL;
  v4 = 6LL;
  if ( a3 )
    v4 = 7LL;
  return PspSetCreateProcessNotifyRoutine(a2, v4);
}
