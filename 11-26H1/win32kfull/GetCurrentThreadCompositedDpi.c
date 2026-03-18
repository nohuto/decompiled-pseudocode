/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x140031050
 * Callers:
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1401D198C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     _GetMouseMovePointsEx @ 0x140210FEC (_GetMouseMovePointsEx.c)
 *     GetScreenRect @ 0x14025BAE8 (GetScreenRect.c)
 *     GetHimetricScaleForMonitor @ 0x140260D78 (GetHimetricScaleForMonitor.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 GetCurrentThreadCompositedDpi()
{
  unsigned __int16 v0; // bx

  v0 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  if ( v0
    && (!*((_QWORD *)PtiCurrent() + 61)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 61) + 8LL) + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v0;
}
