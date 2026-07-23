/*
 * XREFs of EvaluateCurrentState @ 0x1800E2B50
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800678A0 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     EvaluateFeature @ 0x1800E2BF8 (EvaluateFeature.c)
 */

_BOOL8 EvaluateCurrentState()
{
  EvaluateFeature();
  return *(_DWORD *)g_Feature_2616453435_61252280_FeatureDescriptorDetails != 1;
}
