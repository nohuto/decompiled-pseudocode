/*
 * XREFs of ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x180056A9C
 * Callers:
 *     ?GetBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180085600 (-GetBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@11PEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NeedsIntermediateSurfaceRealization@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x180085700 (-NeedsIntermediateSurfaceRealization@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@1PEBV-$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall GetBitmapCurrentValue(
        struct CImageSource *a1,
        const struct BitmapSourceInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    v4 = (*(__int64 (__fastcall **)(char *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*((_QWORD *)a1 + 1) + 128LL))(
           (char *)a1 + 8,
           a3,
           a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4Cu);
  }
  return v3;
}
