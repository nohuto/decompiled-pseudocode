/*
 * XREFs of Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788
 * Callers:
 *     NtUserSwitchDesktop @ 0x14025C610 (NtUserSwitchDesktop.c)
 *     PrepareForLogoff @ 0x140292110 (PrepareForLogoff.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140295B28 (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionCreateDesktopEntryPoint @ 0x1402AE8F0 (EditionCreateDesktopEntryPoint.c)
 *     NtUserAutoRotateScreen @ 0x1402AFBC0 (NtUserAutoRotateScreen.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     NtUserGetDCEx @ 0x1402B3110 (NtUserGetDCEx.c)
 *     NtUserSetClipboardData @ 0x1402BC050 (NtUserSetClipboardData.c)
 *     NtUserUserHandleGrantAccess @ 0x1402C0C90 (NtUserUserHandleGrantAccess.c)
 * Callees:
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x140297178 (Feature_UserJobImprovement__private_IsEnabledFallback.c)
 */

__int64 Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserJobImprovement__private_featureState & 0x10) != 0 )
    return Feature_UserJobImprovement__private_featureState & 1;
  else
    return Feature_UserJobImprovement__private_IsEnabledFallback(
             (unsigned int)Feature_UserJobImprovement__private_featureState,
             3LL);
}
