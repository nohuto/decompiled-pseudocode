/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0087320
 * Callers:
 *     GrePolyBezier @ 0x1C0007490 (GrePolyBezier.c)
 *     NtGdiPolyPatBlt @ 0x1C0086690 (NtGdiPolyPatBlt.c)
 *     NtGdiRectangle @ 0x1C00A2B10 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C00CA940 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C00E62C0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0291C00 (NtGdiInvertRgn.c)
 *     GrePolyPolyline @ 0x1C0293850 (GrePolyPolyline.c)
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
