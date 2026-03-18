/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C00BF1F0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C0079AB0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread(ghsemDCVisRgn);
}
