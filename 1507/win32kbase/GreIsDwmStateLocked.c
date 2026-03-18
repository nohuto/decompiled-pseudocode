/*
 * XREFs of GreIsDwmStateLocked @ 0x1C00BDA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDwmState);
}
