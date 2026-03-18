/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C029009C
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

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 176LL) & 1) == 0 )
    return 0;
  return v2;
}
