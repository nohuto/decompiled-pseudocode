/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C0080520
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C0080510 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C00BDA80 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
