/*
 * XREFs of Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline @ 0x1402A1B30
 * Callers:
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 * Callees:
 *     Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback @ 0x1402A1B6C (Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback.c)
 */

__int64 Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixDPIRecursionDoubleFault__private_featureState & 0x10) != 0 )
    return Feature_FixDPIRecursionDoubleFault__private_featureState & 1;
  else
    return Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback(
             (unsigned int)Feature_FixDPIRecursionDoubleFault__private_featureState,
             3LL);
}
