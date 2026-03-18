/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C003CBD8
 * Callers:
 *     GrePolyPolygon @ 0x1C000FFD0 (GrePolyPolygon.c)
 *     NtGdiPolyPatBlt @ 0x1C003CC00 (NtGdiPolyPatBlt.c)
 *     NtGdiRectangle @ 0x1C00FC010 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C013BC60 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0291780 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C0292BB0 (GrePolyBezier.c)
 *     GrePolyPolyline @ 0x1C0293310 (GrePolyPolyline.c)
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
