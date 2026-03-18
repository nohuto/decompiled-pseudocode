/*
 * XREFs of Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline @ 0x140303440
 * Callers:
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x140291F08 (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z.c)
 * Callees:
 *     Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback @ 0x14030347C (Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ComponentServicesFreeze__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ComponentServicesFreeze__private_featureState & 1;
  else
    return Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ComponentServicesFreeze__private_featureState,
             3LL);
}
