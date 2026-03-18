/*
 * XREFs of ?OverlaysEnabled@COverlayContext@@AEAA_NXZ @ 0x18000761C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180110884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::OverlaysEnabled(COverlayContext *this)
{
  bool result; // al

  if ( CCommonRegistryData::m_dwOverlayTestMode == 5 )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 23) <= 1u || !*((_BYTE *)this + 839) )
    return 0;
  return result;
}
