/*
 * XREFs of MatrixAppendScale2D @ 0x1800139C8
 * Callers:
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18000E0A0 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ??0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180082254 (--0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z @ 0x180124EF4 (-DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180151730 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180159ED4 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

struct D2DMatrix *__fastcall MatrixAppendScale2D(struct D2DMatrix *a1, float a2, float a3)
{
  _DWORD v4[16]; // [rsp+20h] [rbp-50h] BYREF

  v4[14] = 0;
  v4[13] = 0;
  v4[12] = 0;
  v4[11] = 0;
  v4[9] = 0;
  v4[8] = 0;
  v4[7] = 0;
  v4[6] = 0;
  v4[4] = 0;
  v4[3] = 0;
  v4[2] = 0;
  v4[1] = 0;
  *(float *)v4 = a2;
  *(float *)&v4[5] = a3;
  v4[10] = 1065353216;
  v4[15] = 1065353216;
  return D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v4);
}
