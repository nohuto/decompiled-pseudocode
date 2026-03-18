/*
 * XREFs of RIMIsRunningOnMobile @ 0x1C00E145C
 * Callers:
 *     rimObsIsRegisteredObserverAllowed @ 0x1C00DFAB0 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsCheckForObservationPermissions @ 0x1C00DFE34 (rimObsCheckForObservationPermissions.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C00054C8 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnMobile()
{
  return (unsigned int)RIMGetOneCoreEdition() == 4;
}
