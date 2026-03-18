/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1C00C1930
 * Callers:
 *     <none>
 * Callees:
 *     rimObsCheckForObservationPermissions @ 0x1C00D3034 (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C00D38B4 (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle, unsigned int a2)
{
  if ( !a2 )
    return 3221225485LL;
  if ( (unsigned int)rimObsCheckForObservationPermissions(a2) )
    return rimObsUpdateInputObserverRegistration(Handle, 1);
  return 3221225506LL;
}
