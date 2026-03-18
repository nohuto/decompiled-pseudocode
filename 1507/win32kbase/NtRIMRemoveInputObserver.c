/*
 * XREFs of NtRIMRemoveInputObserver @ 0x1C00C0DD0
 * Callers:
 *     <none>
 * Callees:
 *     rimObsCheckForObservationPermissions @ 0x1C00D14DC (rimObsCheckForObservationPermissions.c)
 */

NTSTATUS __fastcall NtRIMRemoveInputObserver(void *a1)
{
  if ( (unsigned int)rimObsCheckForObservationPermissions() )
    return ObCloseHandle(a1, 1);
  else
    return -1073741790;
}
