/*
 * XREFs of Feature_119486776__private_IsEnabledDeviceUsageNoInline @ 0x1402AF094
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x14027A5A0 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1402BECB0 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     Feature_119486776__private_IsEnabledFallback @ 0x1402AF0D0 (Feature_119486776__private_IsEnabledFallback.c)
 */

__int64 Feature_119486776__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_119486776__private_featureState & 0x10) != 0 )
    return Feature_119486776__private_featureState & 1;
  else
    return Feature_119486776__private_IsEnabledFallback((unsigned int)Feature_119486776__private_featureState, 3LL);
}
