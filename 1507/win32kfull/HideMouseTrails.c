/*
 * XREFs of HideMouseTrails @ 0x1C01D1E90
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < gMouseTrails )
    GreMovePointer((HDEV)*gpDispInfo, *(_DWORD *)(gpsi + 3976LL), *(_DWORD *)(gpsi + 3980LL), 1);
}
