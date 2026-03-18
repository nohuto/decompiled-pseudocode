/*
 * XREFs of Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline @ 0x1402D0D60
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_Scoobe_ShellHost__private_IsEnabledFallback @ 0x1402D0D9C (Feature_Scoobe_ShellHost__private_IsEnabledFallback.c)
 */

__int64 Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Scoobe_ShellHost__private_featureState & 0x10) != 0 )
    return Feature_Scoobe_ShellHost__private_featureState & 1;
  else
    return Feature_Scoobe_ShellHost__private_IsEnabledFallback(
             (unsigned int)Feature_Scoobe_ShellHost__private_featureState,
             3LL);
}
