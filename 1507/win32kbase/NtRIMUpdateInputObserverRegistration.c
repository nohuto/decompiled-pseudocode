/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1C00C0E00
 * Callers:
 *     <none>
 * Callees:
 *     rimObsCheckForObservationPermissions @ 0x1C00D14DC (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C00D1AA0 (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle)
{
  if ( (unsigned int)rimObsCheckForObservationPermissions() )
    return rimObsUpdateInputObserverRegistration(Handle, 1);
  else
    return 3221225506LL;
}
