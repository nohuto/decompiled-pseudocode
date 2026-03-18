/*
 * XREFs of GreIsDynamicModeChangeLocked @ 0x1C0014EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDynamicModeChangeLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemDynamicModeChange) != 0;
}
