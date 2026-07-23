/*
 * XREFs of _wcsicmp @ 0x14014DD0C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400F5198 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1400F8714 (LdrRscIsTypeExist.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401406C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x1401479D0 (-CompareLangName@@YAHPEBX0@Z.c)
 *     LdrpVerifyAlternateResourceModule @ 0x14014BB28 (LdrpVerifyAlternateResourceModule.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1401CE93C (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401CE9AC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     RtlpHashStringToAtom @ 0x140428450 (RtlpHashStringToAtom.c)
 *     PiSwStopDestroy @ 0x140484A6C (PiSwStopDestroy.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140486EC4 (PiSwDeviceFindInterfaceEntry.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140489514 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140489C70 (PiUEventNotifyDeviceInstanceChange.c)
 *     ConstraintEval @ 0x140489ED0 (ConstraintEval.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14048A778 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404BBA40 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     StringListContains @ 0x1404BBD28 (StringListContains.c)
 *     GetPropertyFromPropArray @ 0x1404CB4A4 (GetPropertyFromPropArray.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404CE6F8 (PiSwDeviceMakeCompatibleIds.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404CF3D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404CF684 (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceCompareObjects @ 0x1404D08F8 (PiSwDeviceCompareObjects.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1404D1EB0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmIsLocalMachineContainer @ 0x1404D2870 (_CmIsLocalMachineContainer.c)
 *     PiDmCompareObjects @ 0x1404E2070 (PiDmCompareObjects.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1404E3C7C (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1404E4E48 (PiPnpRtlObjectEventCompareObjects.c)
 *     PropertyEval @ 0x1404E51A4 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1404E535C (PiDqPropertyCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     LdrpSearchResourceSection_U @ 0x1404FFD34 (LdrpSearchResourceSection_U.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14050D31C (PiBuildDeviceNodeInstancePath.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14050FABC (PiDcUpdateDeviceContainerMembership.c)
 *     PipCheckForDenyExecute @ 0x140512538 (PipCheckForDenyExecute.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 *     PiSwUpdateArrayProperties @ 0x140543E10 (PiSwUpdateArrayProperties.c)
 *     DrvDbSuspendDatabase @ 0x140552338 (DrvDbSuspendDatabase.c)
 *     ArbShareDriverExclusive @ 0x140558810 (ArbShareDriverExclusive.c)
 *     RtlpLangNameInMultiSzString @ 0x14056158C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x140561C7C (RtlpMuiRegGetStringIndexInPool.c)
 *     SdbpFindMatchingName @ 0x1405741BC (SdbpFindMatchingName.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140575F80 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140576810 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EFFC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PnpCheckDriverDependencies @ 0x14062D430 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x14062E824 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140630BAC (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140635930 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406373D4 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14063DA40 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406456BC (PiSwDoesCreateChangesRequireReEnum.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x140675D80 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpMatchDeviceString @ 0x1406C3B1C (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1406C3EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3F70 (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x1406C820C (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x1406C91EC (AslpFileVerQueryBlock.c)
 *     SiIsValidDiskDevice @ 0x1406D6B34 (SiIsValidDiskDevice.c)
 *     _CmMatchLastKnownParentCallback @ 0x1406D96B8 (_CmMatchLastKnownParentCallback.c)
 *     _PnpMultiSzDeleteString @ 0x1406E0168 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1C00 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x1406E55F4 (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E69C4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1406E7230 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140707C70 (VfIsPCIBus.c)
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
