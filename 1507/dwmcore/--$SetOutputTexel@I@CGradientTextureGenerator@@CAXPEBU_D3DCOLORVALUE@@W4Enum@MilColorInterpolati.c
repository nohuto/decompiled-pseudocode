/*
 * XREFs of ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x180159808
 * Callers:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x180159324 (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x1801594B4 (--$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4.c)
 *     ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801595A4 (--$FillTexture@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enum@Mil.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x18005D42C (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floor_0 @ 0x180099B72 (floor_0.c)
 *     ?Premultiply@@YAII@Z @ 0x180149D9C (-Premultiply@@YAII@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::SetOutputTexel<unsigned int>(const __m128i *a1, int a2, int *a3)
{
  __int64 result; // rax
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  int v12; // eax
  unsigned __int8 v13; // di
  unsigned __int8 v14; // bp
  int v15; // eax
  unsigned __int8 v16; // si
  int v17; // eax
  unsigned __int8 v18; // bl
  int v19; // eax
  int v20; // eax
  unsigned __int8 v21; // di
  int v22; // ebx
  int v23; // ebx
  unsigned __int8 v24; // al
  __m128 v25; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v25 = (__m128)_mm_loadu_si128(a1);
  v5 = _mm_shuffle_ps(v25, v25, 255).m128_f32[0];
  if ( v5 >= 1.0 )
    v5 = FLOAT_1_0;
  v6 = v25.m128_f32[0];
  if ( v25.m128_f32[0] >= 1.0 )
    v6 = FLOAT_1_0;
  v7 = v25.m128_f32[1];
  if ( v25.m128_f32[1] >= 1.0 )
    v7 = FLOAT_1_0;
  v8 = v25.m128_f32[2];
  if ( v25.m128_f32[2] >= 1.0 )
    v8 = FLOAT_1_0;
  v9 = v6 * v5;
  v10 = v7 * v5;
  v11 = v8 * v5;
  if ( a2 == 1 )
  {
    v12 = (int)floor_0((float)(v5 * 255.0) + 0.5);
    v13 = -1;
    if ( v12 <= 255 )
    {
      v14 = 0;
      if ( v12 >= 0 )
        v14 = v12;
    }
    else
    {
      v14 = -1;
    }
    v15 = (int)floor_0((float)(v9 * 255.0) + 0.5);
    if ( v15 <= 255 )
    {
      v16 = 0;
      if ( v15 >= 0 )
        v16 = v15;
    }
    else
    {
      v16 = -1;
    }
    v17 = (int)floor_0((float)(v10 * 255.0) + 0.5);
    if ( v17 <= 255 )
    {
      v18 = 0;
      if ( v17 >= 0 )
        v18 = v17;
    }
    else
    {
      v18 = -1;
    }
    v19 = (int)floor_0((float)(v11 * 255.0) + 0.5);
    if ( v19 <= 255 )
    {
      v13 = 0;
      if ( v19 >= 0 )
        v13 = v19;
    }
    result = v13;
    *a3 = v13 | (v14 << 24) | ((v18 | (v16 << 8)) << 8);
  }
  else if ( !a2 )
  {
    if ( v5 > 0.0 )
    {
      v9 = v9 / v5;
      v10 = v10 / v5;
      v11 = v11 / v5;
    }
    v20 = (int)floor_0((float)(v5 * 255.0) + 0.5);
    v21 = -1;
    if ( v20 <= 255 )
    {
      v21 = 0;
      if ( v20 >= 0 )
        v21 = v20;
    }
    v22 = Convert_scRGB_Channel_To_sRGB_Byte(v9) << 8;
    v23 = (Convert_scRGB_Channel_To_sRGB_Byte(v10) | v22) << 8;
    v24 = Convert_scRGB_Channel_To_sRGB_Byte(v11);
    result = Premultiply((v21 << 24) | v23 | (unsigned int)v24);
    *a3 = result;
  }
  return result;
}
