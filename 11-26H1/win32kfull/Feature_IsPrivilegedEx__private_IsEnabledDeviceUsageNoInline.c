/*
 * XREFs of Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140250434
 * Callers:
 *     NtUserPostThreadMessage @ 0x1401D3B50 (NtUserPostThreadMessage.c)
 *     _RegisterUserApiHook @ 0x140237F88 (_RegisterUserApiHook.c)
 *     NtUserRegisterBSDRWindow @ 0x140250280 (NtUserRegisterBSDRWindow.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14026BC80 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _RegisterDManipHook @ 0x1402935E0 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x1402A1BF0 (xxxWrapSendMessageBSM.c)
 *     NtUserRegisterServicesProcess @ 0x1402BA570 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     Feature_IsPrivilegedEx__private_IsEnabledFallback @ 0x1402971CC (Feature_IsPrivilegedEx__private_IsEnabledFallback.c)
 */

__int64 Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IsPrivilegedEx__private_featureState & 0x10) != 0 )
    return Feature_IsPrivilegedEx__private_featureState & 1;
  else
    return Feature_IsPrivilegedEx__private_IsEnabledFallback(
             (unsigned int)Feature_IsPrivilegedEx__private_featureState,
             3LL);
}
