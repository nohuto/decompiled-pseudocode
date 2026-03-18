/*
 * XREFs of ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180026934
 * Callers:
 *     ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180012D60 (-GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?GetD2DBrush@CHwSolidBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180027490 (-GetD2DBrush@CHwSolidBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1800B9904 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z @ 0x1801580F8 (-Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PrepareStopsForInterpolation@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@@Z @ 0x1801677CC (-PrepareStopsForInterpolation@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800AC308 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall Convert_MilColorF_scRGB_To_MilColorF_sRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  float a; // xmm2_4
  D3DVALUE v5; // xmm1_4
  float r; // xmm0_4
  __m128i v7; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  a = a2->a;
  v5 = FLOAT_1_0;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(const struct _D3DCOLORVALUE *)&a2->r;
  if ( a <= 1.0 )
  {
    v5 = 0.0;
    if ( a >= 0.0 )
      v5 = a;
  }
  r = a2->r;
  retstr->a = v5;
  retstr->r = (float)Convert_scRGB_Channel_To_sRGB_Byte(r) / 255.0;
  retstr->g = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->g) / 255.0;
  v7 = _mm_cvtsi32_si128(Convert_scRGB_Channel_To_sRGB_Byte(a2->b));
  result = retstr;
  retstr->b = _mm_cvtepi32_ps(v7).m128_f32[0] / 255.0;
  return result;
}
