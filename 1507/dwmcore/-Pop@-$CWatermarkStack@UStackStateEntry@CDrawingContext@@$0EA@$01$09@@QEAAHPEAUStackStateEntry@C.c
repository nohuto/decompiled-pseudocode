/*
 * XREFs of ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18005B05C
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x1800106A0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180010764 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180027E60 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180028088 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18002976C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z @ 0x1800DC150 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800DC1F8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800DC260 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x1800F4178 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(int *a1, _OWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rcx

  v3 = *a1;
  if ( !v3 )
    return 0LL;
  v4 = (unsigned int)(v3 - 1);
  *a1 = v4;
  if ( a2 )
    *a2 = *(_OWORD *)(*((_QWORD *)a1 + 2) + 16 * v4);
  return 1LL;
}
