/*
 * XREFs of ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664
 * Callers:
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180006244 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180006488 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?NeedsPresent@CDirectFlipInfo@@QEAA_NXZ @ 0x180006994 (-NeedsPresent@CDirectFlipInfo@@QEAA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x18003F550 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800EEF9C (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x1800F6B0C (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@AEAAJPEAVCCompositionSurfaceInfo@@PEA.c)
 *     ?GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180112A08 (-GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180116A08 (-CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180119594 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 *     ?PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ @ 0x180126BD4 (-PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z @ 0x1800862D8 (-SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18008631C (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180086984 (-QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapR.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct CBitmapRealization *__fastcall CCompositionSurfaceInfo::GetRenderingRealizationNoRef(
        CCompositionSurfaceInfo *this)
{
  struct CBitmapRealization *v3; // rsi
  struct CBitmapRealization *v4; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v5[216]; // [rsp+30h] [rbp-178h] BYREF
  HRGN v6; // [rsp+108h] [rbp-A0h]
  int *v7; // [rsp+140h] [rbp-68h] BYREF
  int v8; // [rsp+148h] [rbp-60h] BYREF

  if ( !*((_QWORD *)this + 16) )
  {
    v4 = 0LL;
    if ( (int)CCompositionSurfaceInfo::QueryRenderingRealization(this, (struct CSM_SURFACE_UPDATE *)v5, &v4) >= 0 )
    {
      v3 = v4;
      if ( v4 )
      {
        v8 = 0;
        v7 = &v8;
        CCompositionSurfaceInfo::SetRenderingRealization(this, v4);
        CCompositionSurfaceInfo::DirtyRenderingRealization(this, 1, v6, (struct CRegion *)&v7);
        (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v3 + 16LL))(v3);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v7);
      }
    }
  }
  return (struct CBitmapRealization *)*((_QWORD *)this + 16);
}
