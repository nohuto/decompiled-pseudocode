/*
 * XREFs of ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x180163EF4
 * Callers:
 *     ?ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B4D4 (-ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUInt.c)
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 * Callees:
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

struct D2D_VECTOR_2F __fastcall Matrix3x3::Get2DScaleDimensions(Matrix3x3 *this, struct D2D_VECTOR_2F a2)
{
  float v4; // xmm6_4
  float v5; // xmm0_4
  struct D2D_VECTOR_2F result; // rax

  v4 = sqrtf_0((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)));
  v5 = sqrtf_0((float)(*((float *)this + 3) * *((float *)this + 3)) + (float)(*((float *)this + 4) * *((float *)this + 4)));
  result = a2;
  **(float **)&a2 = v4;
  *(float *)(*(_QWORD *)&a2 + 4LL) = v5;
  return result;
}
