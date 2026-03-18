/*
 * XREFs of Win32AllocPoolWithQuota @ 0x1C0032870
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0003A60 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0003BAC (-AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0003FB0 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 *     CreateSecurityDescriptor @ 0x1C000FD50 (CreateSecurityDescriptor.c)
 *     AllocateWindowManagerSid @ 0x1C0010610 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0010D40 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     UserReAllocPoolWithQuota @ 0x1C0014610 (UserReAllocPoolWithQuota.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCDuplicatedVisualMarshaler@DirectComposition@@$0HEGEEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0015230 (-AllocateTableEntry@-$CGenericTable@IVCDuplicatedVisualMarshaler@DirectComposition@@$0HEGEEDEE@$.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0015E90 (-AllocateTableEntry@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectCompositi.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C00172E8 (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     CreateProfileUserName @ 0x1C00178A0 (CreateProfileUserName.c)
 *     ?AllocateTableEntry@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0018A00 (-AllocateTableEntry@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBas.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0028CB8 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     NtDCompositionSetResourceReferenceArrayProperty @ 0x1C002BB50 (NtDCompositionSetResourceReferenceArrayProperty.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C00304EC (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0030FA8 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C003108C (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0031168 (-AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     ?AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C00311FC (-AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     FastGetProfileStringW @ 0x1C00317C0 (FastGetProfileStringW.c)
 *     AllocAce @ 0x1C0032780 (AllocAce.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0032F10 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     FastGetProfileKeysW @ 0x1C007E5C0 (FastGetProfileKeysW.c)
 *     FastGetProfileValue @ 0x1C007E890 (FastGetProfileValue.c)
 *     InitSystemThread @ 0x1C00818B0 (InitSystemThread.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00ABD50 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00AC530 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00AC890 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00ACC30 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00ACFB0 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00AD300 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00ADB60 (NtUserSetFeatureReportResponse.c)
 *     ?IsAllowedToCall@@YA_NXZ @ 0x1C00B5CD8 (-IsAllowedToCall@@YA_NXZ.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C00D939C (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     InitCreateUserSubsystem @ 0x1C013939C (InitCreateUserSubsystem.c)
 * Callees:
 *     IsWin32AllocPoolWithQuotaImplSupported_0 @ 0x1C0002BD8 (IsWin32AllocPoolWithQuotaImplSupported_0.c)
 *     Win32AllocPoolWithQuotaImpl_0 @ 0x1C0002BE0 (Win32AllocPoolWithQuotaImpl_0.c)
 */

__int64 Win32AllocPoolWithQuota()
{
  if ( (int)IsWin32AllocPoolWithQuotaImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocPoolWithQuotaImpl_0();
}
