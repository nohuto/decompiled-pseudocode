/*
 * XREFs of xxxPaintRect @ 0x1C00863E8
 * Callers:
 *     xxxFillWindow @ 0x1C0087340 (xxxFillWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxGetControlColor @ 0x1C0086354 (xxxGetControlColor.c)
 *     GreSetBrushOrg @ 0x1C00864B0 (GreSetBrushOrg.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 */

__int64 __fastcall xxxPaintRect(__int64 a1, __int64 *a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  __int64 v8; // rbx

  v8 = a1;
  if ( !a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL);
  GetDesktopWindow(v8);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v8, a2, (unsigned __int64)a3, (int)ControlColor + 306);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
