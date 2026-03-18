/*
 * XREFs of ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033D40
 * Callers:
 *     ?NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x180032520 (-NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVC.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x180143180 (-IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180034248 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?IsMonitorSpecificContent@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ @ 0x18014408C (-IsMonitorSpecificContent@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ.c)
 */

char __fastcall CCachedVisualImage::IsMonitorSpecificContent(CCachedVisualImage *this)
{
  char v1; // bl
  unsigned int v3; // edi
  CCachedVisualImage::RenderTargetBitmapInfo *v4; // rsi

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 62) )
  {
    while ( 1 )
    {
      v4 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*((_QWORD *)this + 28) + 48LL * v3);
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v4)
        && !*((_BYTE *)v4 + 40)
        && CCachedVisualImage::RenderTargetBitmapInfo::IsMonitorSpecificContent(v4) )
      {
        break;
      }
      if ( ++v3 >= *((_DWORD *)this + 62) )
        return v1;
    }
    return 1;
  }
  return v1;
}
