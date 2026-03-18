/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0011EE8
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C000A8D8 (GreGetDxSharedSurface.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C000B994 (GreSetRedirectionSurfaceSignaling.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0010444 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C0011C58 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0262294 (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C0262988 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x1C0262BEC (GreHLsurfSetUpdateId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::bDeviceBitmap(SFMLOGICALSURFACE *this)
{
  __int64 v1; // rcx
  int v2; // ecx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 24);
  if ( !v1 )
    return 0LL;
  v2 = *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v1) + 116);
  result = 1LL;
  if ( (v2 & 1) == 0 )
    return 0LL;
  return result;
}
