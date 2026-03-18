/*
 * XREFs of ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C022AB00
 * Callers:
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 * Callees:
 *     DrawThumb2 @ 0x1C014EF3C (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014F0AC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     SBCtlSetup @ 0x1C022C40C (SBCtlSetup.c)
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
  DrawThumb2((__int64)a1, (_DWORD *)a1 + 92, DCEx, ColorObjects, *((_DWORD *)a1 + 90), *((_DWORD *)a1 + 91));
  GreSelectBrush(DCEx, v4);
  _ReleaseDC(DCEx);
}
