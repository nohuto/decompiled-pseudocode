/*
 * XREFs of Win32AllocPoolWithQuota @ 0x1C00211D0
 * Callers:
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C0003E44 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0004A30 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0004B7C (-AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0005490 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C001D6B4 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E328 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     FastGetProfileStringW @ 0x1C001F400 (FastGetProfileStringW.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001F5D0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     AllocAce @ 0x1C00210E0 (AllocAce.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtDCompositionSetResourceReferenceArrayProperty @ 0x1C004F9A0 (NtDCompositionSetResourceReferenceArrayProperty.c)
 *     NtUserSystemParametersInfo @ 0x1C005EBE0 (NtUserSystemParametersInfo.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C006BA6C (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     FastGetProfileValue @ 0x1C006C300 (FastGetProfileValue.c)
 *     CreateSecurityDescriptor @ 0x1C006D450 (CreateSecurityDescriptor.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0070BC0 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0070CA4 (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0070D80 (-AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     ?AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0070E14 (-AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0072E90 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     FastGetProfileKeysW @ 0x1C0075B10 (FastGetProfileKeysW.c)
 *     UserReAllocPoolWithQuota @ 0x1C0075D50 (UserReAllocPoolWithQuota.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCDuplicatedVisualMarshaler@DirectComposition@@$0HEGEEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0077DA0 (-AllocateTableEntry@-$CGenericTable@IVCDuplicatedVisualMarshaler@DirectComposition@@$0HEGEEDEE@$.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0078FD0 (-AllocateTableEntry@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectCompositi.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 *     CreateProfileUserName @ 0x1C007A8E0 (CreateProfileUserName.c)
 *     ?AllocateTableEntry@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C007B770 (-AllocateTableEntry@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBas.c)
 *     InitSystemThread @ 0x1C007C320 (InitSystemThread.c)
 *     AllocateWindowManagerSid @ 0x1C007FEF0 (AllocateWindowManagerSid.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AFDD0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B01A0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00B0820 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00B0AC0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00B0D90 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00B1050 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00B14D0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00B1CA0 (NtUserSetFeatureReportResponse.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00B83C8 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     InitCreateUserSubsystem @ 0x1C013C1B8 (InitCreateUserSubsystem.c)
 * Callees:
 *     IsWin32AllocPoolWithQuotaImplSupported_0 @ 0x1C0002C08 (IsWin32AllocPoolWithQuotaImplSupported_0.c)
 *     Win32AllocPoolWithQuotaImpl_0 @ 0x1C0002C10 (Win32AllocPoolWithQuotaImpl_0.c)
 */

__int64 Win32AllocPoolWithQuota()
{
  if ( (int)IsWin32AllocPoolWithQuotaImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocPoolWithQuotaImpl_0();
}
