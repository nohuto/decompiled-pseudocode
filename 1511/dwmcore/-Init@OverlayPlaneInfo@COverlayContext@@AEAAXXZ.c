/*
 * XREFs of ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180110EC0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N777770@Z @ 0x180110F40 (-Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositio.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

void __fastcall COverlayContext::OverlayPlaneInfo::Init(COverlayContext::OverlayPlaneInfo *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
  CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)this + 2));
  (***((void (__fastcall ****)(_QWORD))this + 19))(*((_QWORD *)this + 19));
}
