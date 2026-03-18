/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02912B4
 * Callers:
 *     GrePolyPolygon @ 0x1C000FFD0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1C00FC010 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C013BC60 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0291780 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C0292BB0 (GrePolyBezier.c)
 *     GrePolyPolyline @ 0x1C0293310 (GrePolyPolyline.c)
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
