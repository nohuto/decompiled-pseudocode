/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0036374
 * Callers:
 *     NtGdiRectangle @ 0x1C000E8C0 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C000F8F0 (NtGdiLineTo.c)
 *     GrePolyPolygon @ 0x1C00115D0 (GrePolyPolygon.c)
 *     NtGdiInvertRgn @ 0x1C0290710 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C0291EE0 (GrePolyBezier.c)
 *     GrePolyPolyline @ 0x1C0292660 (GrePolyPolyline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v2 = 0;
  v3 = *v1;
  if ( *v1 && *(_DWORD *)(v3 + 508) )
    return (*(_DWORD *)(v3 + 36) & 0x4000) != 0;
  return v2;
}
