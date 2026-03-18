/*
 * XREFs of ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0
 * Callers:
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800108F0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003C8F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800521B0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18007D438 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801032E0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180115570 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180115934 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAVCOverlayContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180130C14 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::PopRenderOptionsInternal(CDrawingContext *this, char a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 v7; // [rsp+0h] [rbp-28h]
  __int128 v8; // [rsp+10h] [rbp-18h]

  if ( a2 )
  {
    v2 = *((_DWORD *)this + 106);
    if ( v2 )
      *((_DWORD *)this + 106) = v2 - 1;
  }
  v3 = *((_DWORD *)this + 162);
  if ( v3 )
  {
    v4 = v3 - 1;
    *((_DWORD *)this + 162) = v4;
    v5 = v4;
    v6 = *((_QWORD *)this + 83);
    v5 *= 32LL;
    v7 = *(_OWORD *)(v5 + v6);
    v8 = *(_OWORD *)(v5 + v6 + 16);
  }
  *((_BYTE *)this + 264) = BYTE12(v8);
  *(_QWORD *)((char *)this + 244) = v7;
  *((_DWORD *)this + 68) = DWORD2(v7);
  *((_DWORD *)this + 63) = HIDWORD(v7);
  *((_QWORD *)this + 32) = v8;
  *((_DWORD *)this + 1490) = DWORD2(v8);
}
