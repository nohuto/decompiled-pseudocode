/*
 * XREFs of ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x180199C74
 * Callers:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x180199AE4 (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 * Callees:
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x180199FD8 (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
 *     ?AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3DCOLORVALUE@@@Z @ 0x18019A1EC (-AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3D.c)
 *     ?MoveToNextStopPair@CGradientTextureGenerator@@CAHPEAPEAUMILGradientStop@@0PEBU2@@Z @ 0x18019A63C (-MoveToNextStopPair@CGradientTextureGenerator@@CAHPEAPEAUMILGradientStop@@0PEBU2@@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::FillSingleTexelGradientSpan<unsigned int>(
        const struct MILGradientStop **a1,
        const struct MILGradientStop **a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        float a7,
        __int64 a8)
{
  const struct MILGradientStop **v9; // r10
  const struct MILGradientStop **v10; // r11
  int StopPair; // eax
  float v12; // xmm7_4
  float v13; // xmm6_4
  const struct MILGradientStop *v14; // r8
  struct MILGradientStop **v15; // r10
  struct MILGradientStop **v16; // r11
  struct _D3DCOLORVALUE v18; // [rsp+30h] [rbp-48h] BYREF

  *(_QWORD *)&v18.r = 0LL;
  v9 = a2;
  v10 = a1;
  *(_QWORD *)&v18.b = 0LL;
  StopPair = 1;
  v12 = (float)a5 * *(float *)&a6;
  v13 = (float)(a5 + 1) * *(float *)&a6;
  do
  {
    if ( v13 <= *(float *)*v9 )
      break;
    CGradientTextureGenerator::AddWeightedStopPairContribution(*v10, *v9, v12, v13, a7, &v18);
    StopPair = CGradientTextureGenerator::MoveToNextStopPair(v16, v15, v14);
  }
  while ( StopPair );
  if ( StopPair )
    CGradientTextureGenerator::AddWeightedStopPairContribution(*v10, *v9, v12, v13, a7, &v18);
  return CGradientTextureGenerator::SetOutputTexel<unsigned int>(&v18, a4, a8);
}
