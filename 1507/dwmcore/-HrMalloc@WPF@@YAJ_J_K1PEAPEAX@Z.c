/*
 * XREFs of ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0
 * Callers:
 *     ?EndWalk@CGraphWalker@@AEAAXPEAVIGraphNode@@@Z @ 0x18000BE38 (-EndWalk@CGraphWalker@@AEAAXPEAVIGraphNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BF08 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAJAEBUCFrame@CGraphWalker@@@Z @ 0x18000C03C (-Push@-$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAJAEBUCFrame@CGraphWalker@@@Z.c)
 *     ?Push@?$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEAAJAEBUInverseTransformStruct@CHitTestContext@@@Z @ 0x18000C1A8 (-Push@-$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEAAJAEBUInverseTran.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180019C20 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z @ 0x180019EFC (-Push@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18002DFF8 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500 (--$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawin.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180031E90 (--$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPre.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18003C0C0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAXXZ @ 0x180051BFC (-Optimize@-$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180058F80 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180059260 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B08C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18005BD54 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x18005BDFC (-Optimize@-$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x18005C06C (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18005E1B8 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18005F6E8 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderParameter@@@Z @ 0x18005FD10 (-Push@-$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderPara.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18007375C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800E0700 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800F3D54 (-Push@-$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180143AE8 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180143BC8 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180143D50 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1801457C8 (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x180146D00 (-InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1801490DC (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18014CAE8 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18014CC60 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180152F98 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall WPF::HrMalloc(WPF *this, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  SIZE_T v6; // rdi
  LPVOID (__fastcall *v7)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  LPVOID v8; // rax

  v4 = 0;
  if ( a4 && a3 && a2 && a2 < 0xFFFFFFFFFFFFFFFFuLL / a3 )
  {
    v6 = a3 * a2;
    v7 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v7 == WPF::ProcessHeapImpl::Alloc )
      v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v6);
    else
      v8 = v7(WPF::g_pProcessHeap, v6);
    *a4 = v8;
    if ( !v8 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
