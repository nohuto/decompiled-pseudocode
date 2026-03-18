/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0052088
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C0052528 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     GreGetDxSharedSurface @ 0x1C00D6ACC (GreGetDxSharedSurface.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0118D70 (GreSetRedirectionSurfaceSignaling.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C025E3E4 (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C025EAD8 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x1C025ED3C (GreHLsurfSetUpdateId.c)
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
