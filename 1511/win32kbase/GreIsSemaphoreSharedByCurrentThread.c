/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C0079AB0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C0079AA0 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C00BF1F0 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
