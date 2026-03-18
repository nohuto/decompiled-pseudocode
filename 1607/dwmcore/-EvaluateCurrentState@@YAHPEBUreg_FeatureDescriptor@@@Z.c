/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180146D94
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x180146E3C (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(const struct reg_FeatureDescriptor *a1)
{
  EvaluateFeature(a1);
  return *(_DWORD *)g_Feature_218362170_60825309_FeatureDescriptorDetails != 1;
}
