/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0291584
 * Callers:
 *     GrePolyBezier @ 0x1C0007490 (GrePolyBezier.c)
 *     NtGdiRectangle @ 0x1C00A2B10 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C00CA940 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C00E62C0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0291C00 (NtGdiInvertRgn.c)
 *     GrePolyPolyline @ 0x1C0293850 (GrePolyPolyline.c)
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
