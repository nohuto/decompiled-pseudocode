/*
 * XREFs of ?DetermineOutputScale@CCustomBlur@@SAMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x180169DF0
 * Callers:
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 * Callees:
 *     <none>
 */

float __fastcall CCustomBlur::DetermineOutputScale(float a1, enum D2D1_GAUSSIANBLUR_OPTIMIZATION a2)
{
  float v2; // xmm2_4

  if ( a1 <= CCustomBlur::k_optimizations[5 * a2 + 2] )
    v2 = FLOAT_1_0;
  else
    v2 = FLOAT_0_5;
  return fmaxf(
           0.1,
           fminf(1.0, CCustomBlur::k_optimizations[5 * a2] / (float)(a1 + CCustomBlur::k_optimizations[5 * a2 + 1])))
       * v2;
}
