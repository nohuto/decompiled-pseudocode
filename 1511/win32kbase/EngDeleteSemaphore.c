/*
 * XREFs of EngDeleteSemaphore @ 0x1C0059DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
