/*
 * XREFs of xxxPaintRect @ 0x140127520
 * Callers:
 *     xxxFillWindow @ 0x1401279B4 (xxxFillWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxGetControlColor @ 0x140125958 (xxxGetControlColor.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     GreSetBrushOrg @ 0x14012768C (GreSetBrushOrg.c)
 */

__int64 __fastcall xxxPaintRect(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  struct tagWND *v8; // rdi

  v8 = a1;
  if ( !a1 )
    v8 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(0LL) + 61) + 8LL) + 24LL);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v8, a2, (__int64)a3, (int)ControlColor + 306);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
