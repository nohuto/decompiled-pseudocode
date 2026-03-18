/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1403E3200
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1403E321C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1403E3328 (wil_details_UpdateFeatureConfiguredStates.c)
 */

__int64 wil_details_ReevaluateOnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
