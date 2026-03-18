/*
 * XREFs of _wcsicmp @ 0x14014D79C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400F7358 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1400FA988 (LdrRscIsTypeExist.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x140140150 (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x140147460 (-CompareLangName@@YAHPEBX0@Z.c)
 *     LdrpVerifyAlternateResourceModule @ 0x14014B5B8 (LdrpVerifyAlternateResourceModule.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1401CEBA8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401CEC18 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1403EF800 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1403F0500 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1403F0DB0 (PiDcHandleCustomDeviceEvent.c)
 *     RtlpHashStringToAtom @ 0x140429580 (RtlpHashStringToAtom.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140485DB8 (PiDcUpdateDeviceContainerMembership.c)
 *     PipCheckForDenyExecute @ 0x140487470 (PipCheckForDenyExecute.c)
 *     ConstraintEval @ 0x14048A548 (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048AD7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048BF34 (PiDqQueryApplyObjectEvent.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     PiSwStopDestroy @ 0x1404C6264 (PiSwStopDestroy.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404C7740 (PiSwDeviceFindInterfaceEntry.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404D843C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     StringListContains @ 0x1404D8724 (StringListContains.c)
 *     GetPropertyFromPropArray @ 0x1404E93B4 (GetPropertyFromPropArray.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404E9B2C (PiBuildDeviceNodeInstancePath.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1404EAD24 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404EC670 (PiSwDeviceMakeCompatibleIds.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404ED31C (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404ED5CC (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceCompareObjects @ 0x1404EE830 (PiSwDeviceCompareObjects.c)
 *     _CmIsLocalMachineContainer @ 0x1404F077C (_CmIsLocalMachineContainer.c)
 *     PiDmCompareObjects @ 0x1404FF0E0 (PiDmCompareObjects.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140500CEC (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140501EB8 (PiPnpRtlObjectEventCompareObjects.c)
 *     PropertyEval @ 0x140502214 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1405023CC (PiDqPropertyCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     LdrpSearchResourceSection_U @ 0x14051C944 (LdrpSearchResourceSection_U.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     BiGetNtPartitionPath @ 0x14053CA90 (BiGetNtPartitionPath.c)
 *     IopErrorLogThread @ 0x1405426F4 (IopErrorLogThread.c)
 *     PiSwUpdateArrayProperties @ 0x1405438D0 (PiSwUpdateArrayProperties.c)
 *     DrvDbSuspendDatabase @ 0x140551DF8 (DrvDbSuspendDatabase.c)
 *     ArbShareDriverExclusive @ 0x1405582D0 (ArbShareDriverExclusive.c)
 *     RtlpLangNameInMultiSzString @ 0x14056104C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14056173C (RtlpMuiRegGetStringIndexInPool.c)
 *     SdbpFindMatchingName @ 0x140573C7C (SdbpFindMatchingName.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140575A40 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1405762D0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EB50 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PnpCheckDriverDependencies @ 0x14062D37C (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x14062E770 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140630AF8 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406353CC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14063587C (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140637320 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063C998 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14063D98C (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x14063E354 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406455D8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x140675C9C (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C256C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpMatchDeviceString @ 0x1406C39E4 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1406C3D74 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3E38 (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x1406C80D4 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x1406C90B4 (AslpFileVerQueryBlock.c)
 *     SiIsValidDiskDevice @ 0x1406D69FC (SiIsValidDiskDevice.c)
 *     _CmMatchLastKnownParentCallback @ 0x1406D9580 (_CmMatchLastKnownParentCallback.c)
 *     _PnpMultiSzDeleteString @ 0x1406E0030 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E24D4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2CD4 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x1406E54BC (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E688C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1406E70F8 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140707C40 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1407279B8 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x1407CED08 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x1407CF698 (PipPendingServicesFilter.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  signed __int64 v2; // r9
  unsigned __int16 v3; // r8
  wchar_t v4; // cx

  v2 = (char *)Str1 - (char *)Str2;
  do
  {
    v3 = *(const wchar_t *)((char *)Str2 + v2);
    if ( (unsigned __int16)(v3 - 65) <= 0x19u )
      v3 += 32;
    v4 = *Str2;
    if ( (unsigned __int16)(*Str2 - 65) <= 0x19u )
      v4 += 32;
    ++Str2;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
