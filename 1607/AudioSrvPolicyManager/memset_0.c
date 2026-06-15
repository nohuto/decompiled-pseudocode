/*
 * XREFs of memset_0 @ 0x180024558
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001100 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x1800021BC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003674 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x18000414C (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000E19C (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180010C00 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800168F8 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B1C4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18001B578 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 *     ?InitHashTable@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NI_N@Z @ 0x18001F1DC (-InitHashTable@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?Rehash@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAXI@Z @ 0x18001F2AC (-Rehash@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVo.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x1800227B8 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800232E0 (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
