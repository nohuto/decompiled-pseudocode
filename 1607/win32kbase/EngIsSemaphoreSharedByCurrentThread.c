/*
 * XREFs of EngIsSemaphoreSharedByCurrentThread @ 0x1C007D170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngIsSemaphoreSharedByCurrentThread(HSEMAPHORE hsem)
{
  return GreIsSemaphoreSharedByCurrentThread(hsem);
}
