/*
 * XREFs of ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x180199FD8
 * Callers:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x180199AE4 (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x180199C74 (--$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4.c)
 *     ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180199D64 (--$FillTexture@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enum@Mil.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800B1094 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floor_0 @ 0x1800BF602 (floor_0.c)
 *     ?Premultiply@@YAII@Z @ 0x18018789C (-Premultiply@@YAII@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::SetOutputTexel<unsigned int>(const __m128i *a1, int a2, int *a3)
{
  __int64 result; // rax
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  int v9; // eax
  unsigned __int8 v10; // di
  unsigned __int8 v11; // bp
  int v12; // eax
  unsigned __int8 v13; // si
  int v14; // eax
  unsigned __int8 v15; // bl
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // di
  int v19; // ebx
  int v20; // ebx
  unsigned __int8 v21; // al
  __m128 v22; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v22 = (__m128)_mm_loadu_si128(a1);
  v5 = fminf(_mm_shuffle_ps(v22, v22, 255).m128_f32[0], 1.0);
  v6 = fminf(v22.m128_f32[0], 1.0) * v5;
  v7 = fminf(v22.m128_f32[1], 1.0) * v5;
  v8 = fminf(v22.m128_f32[2], 1.0) * v5;
  if ( a2 == 1 )
  {
    v9 = (int)floor_0((float)(v5 * 255.0) + 0.5);
    v10 = -1;
    if ( v9 <= 255 )
    {
      v11 = 0;
      if ( v9 >= 0 )
        v11 = v9;
    }
    else
    {
      v11 = -1;
    }
    v12 = (int)floor_0((float)(v6 * 255.0) + 0.5);
    if ( v12 <= 255 )
    {
      v13 = 0;
      if ( v12 >= 0 )
        v13 = v12;
    }
    else
    {
      v13 = -1;
    }
    v14 = (int)floor_0((float)(v7 * 255.0) + 0.5);
    if ( v14 <= 255 )
    {
      v15 = 0;
      if ( v14 >= 0 )
        v15 = v14;
    }
    else
    {
      v15 = -1;
    }
    v16 = (int)floor_0((float)(v8 * 255.0) + 0.5);
    if ( v16 <= 255 )
    {
      v10 = 0;
      if ( v16 >= 0 )
        v10 = v16;
    }
    result = v10;
    *a3 = v10 | (v11 << 24) | ((v15 | (v13 << 8)) << 8);
  }
  else if ( !a2 )
  {
    if ( v5 > 0.0 )
    {
      v6 = v6 / v5;
      v7 = v7 / v5;
      v8 = v8 / v5;
    }
    v17 = (int)floor_0((float)(v5 * 255.0) + 0.5);
    v18 = -1;
    if ( v17 <= 255 )
    {
      v18 = 0;
      if ( v17 >= 0 )
        v18 = v17;
    }
    v19 = Convert_scRGB_Channel_To_sRGB_Byte(v6) << 8;
    v20 = (Convert_scRGB_Channel_To_sRGB_Byte(v7) | v19) << 8;
    v21 = Convert_scRGB_Channel_To_sRGB_Byte(v8);
    result = Premultiply((v18 << 24) | v20 | (unsigned int)v21);
    *a3 = result;
  }
  return result;
}
