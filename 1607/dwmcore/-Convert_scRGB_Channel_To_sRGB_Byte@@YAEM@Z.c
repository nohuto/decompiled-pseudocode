/*
 * XREFs of ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800B1094
 * Callers:
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800AAFA4 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x180181034 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1801861F0 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x1801877A8 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x180199FD8 (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
 * Callees:
 *     floor_0 @ 0x1800BF602 (floor_0.c)
 */

unsigned __int8 __fastcall Convert_scRGB_Channel_To_sRGB_Byte(float a1)
{
  if ( a1 <= 0.0 )
    return 0;
  if ( a1 < 1.0 )
    return GammaLUT_scRGB_to_sRGB[(int)floor_0((float)(a1 * 3354.0) + 0.5)];
  return -1;
}
