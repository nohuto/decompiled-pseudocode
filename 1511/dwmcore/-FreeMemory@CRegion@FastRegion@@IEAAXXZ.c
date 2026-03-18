/*
 * XREFs of ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C
 * Callers:
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180007640 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x180009B08 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x1800120D0 (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x1800189D8 (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180018E90 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x18001903C (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180019244 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18006D65C (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18006D854 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18006D9FC (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DA6C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?EnsureDataBufferSize@CRegion@FastRegion@@IEAAJH@Z @ 0x18006DE70 (-EnsureDataBufferSize@CRegion@FastRegion@@IEAAJH@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x18007F2B8 (--1COverlayContext@@MEAA@XZ.c)
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18008361C (--1CBitmapRealization@@MEAA@XZ.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18009145C (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180091E6C (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800FBD54 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801106F4 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180110884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1801116AC (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x1801117DC (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801173E8 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x18013BDA0 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x18013CC30 (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 *     ??_GCRegionWrapper@@UEAAPEAXI@Z @ 0x180158440 (--_GCRegionWrapper@@UEAAPEAXI@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015D608 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall FastRegion::CRegion::FreeMemory(void **this)
{
  _DWORD *v1; // rbx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rbp

  v1 = this + 1;
  if ( this + 1 != *this )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *this);
    else
      v3(WPF::g_pProcessHeap, *this);
    *this = v1;
    *v1 = 0;
  }
}
