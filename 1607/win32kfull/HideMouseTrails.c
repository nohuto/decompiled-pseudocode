/*
 * XREFs of HideMouseTrails @ 0x1C01CBC40
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < gMouseTrails )
    GreMovePointer((HDEV)*gpDispInfo, *(unsigned int *)(gpsi + 5368LL), *(unsigned int *)(gpsi + 5372LL), 1LL);
}
