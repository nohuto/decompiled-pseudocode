/*
 * XREFs of ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18005CB18
 * Callers:
 *     ?GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180059E90 (-GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV-$TMilR.c)
 *     ?NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x180059F90 (-NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall GetBitmapCurrentValue(
        struct CImageSource *a1,
        const struct BitmapSourceInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v4)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *); // rsi
  int BitmapSource; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    v4 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*((_QWORD *)a1 + 1) + 64LL);
    if ( v4 == CCachedVisualImage::GetBitmapSource )
      BitmapSource = CCachedVisualImage::GetBitmapSource((struct CImageSource *)((char *)a1 + 8), a3, a2);
    else
      BitmapSource = v4((struct CImageSource *)((char *)a1 + 8), a3, a2);
    v3 = BitmapSource;
    if ( BitmapSource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x4Cu);
  }
  return v3;
}
