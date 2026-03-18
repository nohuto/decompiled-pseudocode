/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C00CAF10
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C007D180 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread(ghsemDCVisRgn);
}
