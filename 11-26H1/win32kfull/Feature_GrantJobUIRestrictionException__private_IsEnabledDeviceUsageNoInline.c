/*
 * XREFs of Feature_GrantJobUIRestrictionException__private_IsEnabledDeviceUsageNoInline @ 0x1402AF19C
 * Callers:
 *     NtUserGrantJobUIRestrictionException @ 0x1402B5E40 (NtUserGrantJobUIRestrictionException.c)
 * Callees:
 *     Feature_GrantJobUIRestrictionException__private_IsEnabledFallback @ 0x1402AF1D8 (Feature_GrantJobUIRestrictionException__private_IsEnabledFallback.c)
 */

__int64 Feature_GrantJobUIRestrictionException__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GrantJobUIRestrictionException__private_featureState & 0x10) != 0 )
    return Feature_GrantJobUIRestrictionException__private_featureState & 1;
  else
    return Feature_GrantJobUIRestrictionException__private_IsEnabledFallback(
             (unsigned int)Feature_GrantJobUIRestrictionException__private_featureState,
             3LL);
}
