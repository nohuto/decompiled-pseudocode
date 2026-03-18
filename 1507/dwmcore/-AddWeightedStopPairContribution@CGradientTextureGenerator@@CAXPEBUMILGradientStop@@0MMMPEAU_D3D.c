/*
 * XREFs of ?AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3DCOLORVALUE@@@Z @ 0x180159A28
 * Callers:
 *     ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x1801594B4 (--$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4.c)
 * Callees:
 *     ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x18015A364 (-InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z.c)
 *     ?IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z @ 0x18015A41C (-IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::AddWeightedStopPairContribution(
        const struct MILGradientStop *a1,
        const struct MILGradientStop *a2,
        float a3,
        float a4,
        float a5,
        struct _D3DCOLORVALUE *a6)
{
  float v7; // xmm3_4
  __int64 v8; // rdx
  __int64 v9; // rcx
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  D3DVALUE v13; // xmm3_4
  D3DVALUE v14; // xmm1_4
  float v15; // xmm0_4
  struct _D3DCOLORVALUE v16; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 <= *(float *)a1 )
    a3 = *(float *)a1;
  v7 = *(float *)a2;
  if ( *(float *)a2 <= a4 )
    a4 = *(float *)a2;
  if ( !(unsigned int)CGradientTextureGenerator::IsPositionLessThanOrEqual(a4 - a3, 0.0) )
  {
    v12 = v10 * a5;
    CGradientTextureGenerator::InterpolateColors(
      (const struct _D3DCOLORVALUE *)(v9 + 4),
      (const struct _D3DCOLORVALUE *)(v8 + 4),
      (float)(v10 * 0.5) + a3,
      v7 - v11,
      v11,
      &v16);
    v13 = (float)(v16.a * v12) + a6->a;
    v14 = (float)(v16.g * v12) + a6->g;
    a6->r = (float)(v16.r * v12) + a6->r;
    v15 = v16.b * v12;
    a6->a = v13;
    a6->g = v14;
    a6->b = v15 + a6->b;
  }
}
