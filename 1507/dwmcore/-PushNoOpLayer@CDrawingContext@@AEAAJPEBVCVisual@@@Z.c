/*
 * XREFs of ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180028408
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x1800281B8 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B08C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 */

__int64 __fastcall CDrawingContext::PushNoOpLayer(CDrawingContext *this, const struct CVisual *a2)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF
  const struct CVisual *v4; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v3 = 6;
  return CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 424, &v3);
}
