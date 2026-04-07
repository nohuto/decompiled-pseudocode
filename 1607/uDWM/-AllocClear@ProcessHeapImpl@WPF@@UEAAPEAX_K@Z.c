/*
 * XREFs of ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0
 * Callers:
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180009BEC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18000A5C8 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180015220 (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180015488 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180015764 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015814 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800158F0 (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AE4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015B80 (-Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180017F70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180019590 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019A98 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001C6D0 (-Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001CA30 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x180021210 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180023840 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x18002A730 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E5D0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x1800368D0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800379AC (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x180037A84 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x180037B54 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180037BE8 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180037D18 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003828C (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038330 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039468 (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800397DC (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039C3C (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CThumbnailVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003FDD0 (-Create@CThumbnailVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18003FE74 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180040F68 (-Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041030 (-Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18004144C (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041500 (-Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18004191C (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180042BB0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800496F4 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

void *__fastcall WPF::ProcessHeapImpl::AllocClear(WPF::ProcessHeapImpl *this, size_t a2)
{
  SIZE_T v3; // r8
  void *result; // rax
  void *v5; // rdi

  v3 = a2;
  if ( !a2 )
    v3 = 1LL;
  result = HeapAlloc(g_hProcessHeap, 0, v3);
  v5 = result;
  if ( result )
  {
    memset_0(result, 0, a2);
    return v5;
  }
  return result;
}
