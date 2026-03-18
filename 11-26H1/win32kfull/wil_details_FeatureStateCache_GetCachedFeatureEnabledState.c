/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140298800
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140298940 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_GetCurrentVariantState @ 0x1402A0A64 (wil_details_GetCurrentVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140298838 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1);
}
