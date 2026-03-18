/*
 * XREFs of GreIsDwmStateLocked @ 0x1C00BF1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState);
}
