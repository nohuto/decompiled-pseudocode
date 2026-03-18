/*
 * XREFs of ?CheckForDrawingWithProtectedBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@@Z @ 0x180027CFC
 * Callers:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053700 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053780 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CDrawingContext::CheckForDrawingWithProtectedBitmap(CDrawingContext *this, struct IBitmapContent *a2)
{
  char v2; // di
  bool (__fastcall *v5)(CCachedVisualImage *__hidden); // rsi
  bool IsProtectedContent; // al
  bool (__fastcall *v7)(CCachedVisualImage *__hidden); // rsi
  bool IsMonitorSpecificContent; // al

  v2 = 0;
  v5 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)a2 + 48LL);
  if ( v5 == CCachedVisualImage::IsProtectedContent )
    IsProtectedContent = CCachedVisualImage::IsProtectedContent(a2);
  else
    IsProtectedContent = v5(a2);
  if ( IsProtectedContent )
  {
    *((_BYTE *)this + 5938) = 1;
    v2 = 1;
  }
  v7 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)a2 + 40LL);
  if ( v7 == CCachedVisualImage::IsMonitorSpecificContent )
    IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2);
  else
    IsMonitorSpecificContent = v7(a2);
  if ( IsMonitorSpecificContent )
  {
    *((_BYTE *)this + 5940) = 1;
    return 1;
  }
  return v2;
}
