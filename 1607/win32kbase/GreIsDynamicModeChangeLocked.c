/*
 * XREFs of GreIsDynamicModeChangeLocked @ 0x1C007BAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDynamicModeChangeLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemDynamicModeChange) != 0;
}
