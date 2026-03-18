/*
 * XREFs of GreIsVisRgnPublishLocked @ 0x1C00CAF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnPublishLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemVisRgnPublish) != 0;
}
