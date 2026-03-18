/*
 * XREFs of ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x18012899C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N888881@Z @ 0x1801289F0 (-Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCComp.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::OverlayPlaneInfo::Init(COverlayContext::OverlayPlaneInfo *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
  CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)this + 3));
  (***((void (__fastcall ****)(_QWORD))this + 20))(*((_QWORD *)this + 20));
}
