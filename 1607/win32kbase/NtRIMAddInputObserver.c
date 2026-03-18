/*
 * XREFs of NtRIMAddInputObserver @ 0x1C00CE0F0
 * Callers:
 *     <none>
 * Callees:
 *     rimObsAddInputObserver @ 0x1C00DFB04 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C00DFE34 (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v13; // r9

  if ( !a7 )
    return 3221225485LL;
  if ( !(unsigned int)rimObsCheckForObservationPermissions(a7) )
    return 3221225506LL;
  LOBYTE(v13) = 1;
  return rimObsAddInputObserver(a1, a2, a3, v13, a4, a5, a6, a7, a8);
}
