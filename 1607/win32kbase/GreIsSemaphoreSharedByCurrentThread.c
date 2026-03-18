/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C007D180
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C007D170 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C00CAF10 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
