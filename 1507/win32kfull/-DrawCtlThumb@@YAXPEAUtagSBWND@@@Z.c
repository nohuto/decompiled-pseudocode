/*
 * XREFs of ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0231914
 * Callers:
 *     xxxEndScroll @ 0x1C02336E4 (xxxEndScroll.c)
 * Callees:
 *     DrawThumb2 @ 0x1C0119F80 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A0FC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     SBCtlSetup @ 0x1C023346C (SBCtlSetup.c)
 */

void __fastcall DrawCtlThumb(struct tagSBWND *a1)
{
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v4; // rdi

  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  SBCtlSetup(a1);
  ColorObjects = (HBRUSH)xxxGetColorObjects(a1, (__int64)DCEx);
  v4 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2((__int64)a1, (_DWORD *)a1 + 96, DCEx, ColorObjects, *((_DWORD *)a1 + 94), *((_DWORD *)a1 + 95));
  GreSelectBrush(DCEx, v4);
  _ReleaseDC(DCEx);
}
