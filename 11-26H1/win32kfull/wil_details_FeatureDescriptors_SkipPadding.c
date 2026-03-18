/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x140220FE4
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1403E321C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1403E3298 (wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1403E3328 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1403E39F0 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 *     wil_InitializeFeatureStaging @ 0x1403FA09C (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1403FA188 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( a1 < wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
