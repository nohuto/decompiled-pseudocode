/*
 * XREFs of Feature_3836693817__private_IsEnabledDeviceUsageNoInline @ 0x1402AF0EC
 * Callers:
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 * Callees:
 *     Feature_3836693817__private_IsEnabledFallback @ 0x1402AF128 (Feature_3836693817__private_IsEnabledFallback.c)
 */

__int64 Feature_3836693817__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3836693817__private_featureState & 0x10) != 0 )
    return Feature_3836693817__private_featureState & 1;
  else
    return Feature_3836693817__private_IsEnabledFallback((unsigned int)Feature_3836693817__private_featureState, 3LL);
}
