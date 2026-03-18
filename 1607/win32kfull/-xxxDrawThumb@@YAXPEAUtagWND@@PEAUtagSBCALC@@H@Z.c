/*
 * XREFs of ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022AFE8
 * Callers:
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 * Callees:
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     DrawThumb2 @ 0x1C014EF3C (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014F0AC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GetWndSBDisableFlags @ 0x1C014F10C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawThumb(struct tagWND *a1, struct tagSBCALC *a2, unsigned int a3)
{
  HDC DCEx; // rbp
  char WndSBDisableFlags; // si
  HBRUSH ColorObjects; // rbx
  __int64 v8; // rdi
  _DWORD v9[16]; // [rsp+30h] [rbp-68h] BYREF

  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  CalcSBStuff((__int64)a1, (__int64)v9, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3);
  ColorObjects = (HBRUSH)xxxGetColorObjects(a1, (__int64)DCEx);
  v8 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2((__int64)a1, v9, DCEx, ColorObjects, a3, WndSBDisableFlags);
  GreSelectBrush(DCEx, v8);
  _ReleaseDC(DCEx);
}
