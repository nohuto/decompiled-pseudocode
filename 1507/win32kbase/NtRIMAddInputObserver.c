/*
 * XREFs of NtRIMAddInputObserver @ 0x1C00C0CD0
 * Callers:
 *     <none>
 * Callees:
 *     rimObsAddInputObserver @ 0x1C00D1204 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C00D14DC (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, __int64 a7)
{
  __int64 v11; // r9

  if ( !(unsigned int)rimObsCheckForObservationPermissions() )
    return 3221225506LL;
  LOBYTE(v11) = 1;
  return rimObsAddInputObserver(a1, a2, a3, v11, a4, a5, a6, a7);
}
