/*
 * XREFs of Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     MagGetLensContextInformation @ 0x1401EA86C (MagGetLensContextInformation.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x14029B104 (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionIsRIMInjectionBlocked @ 0x1402A4DD0 (EditionIsRIMInjectionBlocked.c)
 *     NtUserPrintWindow @ 0x1402B9110 (NtUserPrintWindow.c)
 *     NtUserRegisterCoreMessagingEndPoint @ 0x1402B9F20 (NtUserRegisterCoreMessagingEndPoint.c)
 *     NtUserSetProcessWin32Capabilities @ 0x1402BD640 (NtUserSetProcessWin32Capabilities.c)
 * Callees:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x1402971B0 (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 */

__int64 Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Win32ProcessCapabilities__private_featureState & 0x10) != 0 )
    return Feature_Win32ProcessCapabilities__private_featureState & 1;
  else
    return Feature_Win32ProcessCapabilities__private_IsEnabledFallback(
             (unsigned int)Feature_Win32ProcessCapabilities__private_featureState,
             3LL);
}
