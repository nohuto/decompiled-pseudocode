/*
 * XREFs of ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053700
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?CheckForDrawingWithProtectedBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@@Z @ 0x180027CFC (-CheckForDrawingWithProtectedBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800535A4 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x18010AF70 (-IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180054280 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 */

char __fastcall CCachedVisualImage::IsMonitorSpecificContent(CCachedVisualImage *this)
{
  char v1; // bl
  unsigned int v3; // esi
  CCachedVisualImage::RenderTargetBitmapInfo *v4; // rdi

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 40) )
  {
    while ( 1 )
    {
      v4 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*((_QWORD *)this + 17) + 48LL * v3);
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v4) && !*((_BYTE *)v4 + 40) && *((_BYTE *)v4 + 41) )
        break;
      if ( ++v3 >= *((_DWORD *)this + 40) )
        return v1;
    }
    return 1;
  }
  return v1;
}
