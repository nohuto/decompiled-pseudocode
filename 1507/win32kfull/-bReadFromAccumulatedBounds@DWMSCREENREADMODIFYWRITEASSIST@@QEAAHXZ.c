/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02915A4
 * Callers:
 *     GrePolyBezier @ 0x1C0007490 (GrePolyBezier.c)
 *     NtGdiRectangle @ 0x1C00A2B10 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C00CA940 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C00E62C0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0291C00 (NtGdiInvertRgn.c)
 *     GrePolyPolyline @ 0x1C0293850 (GrePolyPolyline.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C010577C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
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
