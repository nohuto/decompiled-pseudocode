/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C028E070
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00D43E0 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00DEB20 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && (*((_WORD *)this + 51) & 0x200) != 0;
}
