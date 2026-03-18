/*
 * XREFs of ?Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z @ 0x1801580F8
 * Callers:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x180151260 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 * Callees:
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180026934 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 */

__int64 __fastcall Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB(const struct _D3DCOLORVALUE *a1)
{
  const __m128i *v1; // rax
  __m128 v2; // xmm6
  float v3; // xmm5_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  struct _D3DCOLORVALUE v10; // [rsp+20h] [rbp-28h] BYREF
  float v11; // [rsp+50h] [rbp+8h]
  int v12; // [rsp+68h] [rbp+20h]

  v1 = (const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v10, a1);
  v2 = (__m128)_mm_loadu_si128(v1);
  v3 = _mm_shuffle_ps(v2, v2, 255).m128_f32[0];
  v4 = (float)(v3 * v2.m128_f32[0]) * 255.0;
  v5 = (float)(v3 * 255.0) + 6291456.25;
  v11 = v5;
  v6 = _mm_shuffle_ps(v2, v2, 85).m128_f32[0];
  v2.m128_i32[0] = v1->m128i_i32[2];
  v7 = v4 + 6291456.25;
  LODWORD(v1) = (LOWORD(v7) & 0x1FE | ((LODWORD(v11) & 0xFFFFFFFE) << 8)) << 8;
  v8 = (float)((float)(v6 * v3) * 255.0) + 6291456.25;
  *(float *)&v12 = (float)((float)(v2.m128_f32[0] * v3) * 255.0) + 6291456.25;
  return (unsigned __int8)(v12 >> 1) | ((LOWORD(v8) & 0x1FE | (unsigned int)v1) << 7);
}
