/*
 * XREFs of ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x18015A364
 * Callers:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x180159324 (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ?AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3DCOLORVALUE@@@Z @ 0x180159A28 (-AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3D.c)
 *     ?SetFirstStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DCOLORVALUE@@@Z @ 0x18015A76C (-SetFirstStop@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DC.c)
 *     ?SetLastStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@IIPEAU_D3DCOLORVALUE@@@Z @ 0x18015A91C (-SetLastStop@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@IIPEAU_D3DCOLO.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientTextureGenerator::InterpolateColors(
        const struct _D3DCOLORVALUE *a1,
        const struct _D3DCOLORVALUE *a2,
        float a3,
        float a4,
        float a5,
        struct _D3DCOLORVALUE *a6)
{
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  D3DVALUE v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm5_4

  v6 = (float)(a3 - a5) / a4;
  v7 = (float)(1.0 - v6) * a1->g;
  v8 = v6 * a2->r;
  a6->a = (float)((float)(1.0 - v6) * a1->a) + (float)(v6 * a2->a);
  v9 = (float)(1.0 - v6) * a1->b;
  v10 = (float)((float)(1.0 - v6) * a1->r) + v8;
  v11 = v6 * a2->g;
  v12 = v6 * a2->b;
  a6->r = v10;
  a6->g = v7 + v11;
  a6->b = v9 + v12;
}
