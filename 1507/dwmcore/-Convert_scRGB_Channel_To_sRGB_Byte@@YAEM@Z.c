/*
 * XREFs of ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x18005D42C
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180072ED4 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1801417D8 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180147D40 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x180149CA8 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x180159808 (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
 * Callees:
 *     floor_0 @ 0x180099B72 (floor_0.c)
 */

unsigned __int8 __fastcall Convert_scRGB_Channel_To_sRGB_Byte(float a1)
{
  if ( a1 <= 0.0 )
    return 0;
  if ( a1 < 1.0 )
    return GammaLUT_scRGB_to_sRGB[(int)floor_0((float)(a1 * 3354.0) + 0.5)];
  return -1;
}
