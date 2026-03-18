/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02900BC
 * Callers:
 *     NtGdiRectangle @ 0x1C000E8C0 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C000F8F0 (NtGdiLineTo.c)
 *     GrePolyPolygon @ 0x1C00115D0 (GrePolyPolygon.c)
 *     NtGdiInvertRgn @ 0x1C0290710 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C0291EE0 (GrePolyBezier.c)
 *     GrePolyPolyline @ 0x1C0292660 (GrePolyPolyline.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013A1CC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  struct EPOINTL *v4; // rax
  struct _RECTL v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v6, 4LL) )
    {
      v4 = DC::eptlOrigin(**((DC ***)this + 3));
      v6.left -= *(_DWORD *)v4;
      v6.right -= *(_DWORD *)v4;
      v6.top -= *((_DWORD *)v4 + 1);
      v6.bottom -= *((_DWORD *)v4 + 1);
      if ( !ERECTL::bEmpty((ERECTL *)&v6) )
        return (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v6);
    }
  }
  return v3;
}
