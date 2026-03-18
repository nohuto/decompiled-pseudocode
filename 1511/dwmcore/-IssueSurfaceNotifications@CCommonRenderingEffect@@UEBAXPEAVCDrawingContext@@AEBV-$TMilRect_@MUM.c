/*
 * XREFs of ?IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118480
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 */

void __fastcall CCommonRenderingEffect::IssueSurfaceNotifications(__int64 a1, CDrawingContext *a2, struct MilRectF *a3)
{
  CCompositionSurfaceBitmap **v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx

  v4 = (CCompositionSurfaceBitmap **)(a1 + 8);
  v6 = 2LL;
  do
  {
    if ( *v4 )
    {
      if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(*v4) )
        CDrawingContext::RecordBitmapContentInfo(
          a2,
          (CCachedVisualImage *)(v7 + 40),
          (CCompositionSurfaceBitmap *)(v7 + 40),
          a3,
          0LL);
    }
    ++v4;
    --v6;
  }
  while ( v6 );
}
