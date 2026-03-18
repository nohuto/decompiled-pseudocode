/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C0078390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsUserCritSecInExclusive()
{
  return ExIsResourceAcquiredExclusiveLite(gpresUser) == 1;
}
