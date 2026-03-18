/*
 * XREFs of ?IsEmpty@CRegion@FastRegion@@QEBA_NXZ @ 0x1800FBDD4
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180110884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FastRegion::CRegion::IsEmpty(FastRegion::CRegion *this)
{
  return **(_DWORD **)this == 0;
}
