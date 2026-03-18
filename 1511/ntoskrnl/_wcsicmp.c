/*
 * XREFs of _wcsicmp @ 0x14014437C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14009B520 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1400DDB7C (LdrRscIsTypeExist.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14013A8B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x14013EEB8 (-CompareLangName@@YAHPEBX0@Z.c)
 *     LdrpVerifyAlternateResourceModule @ 0x140141F60 (LdrpVerifyAlternateResourceModule.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401C02CC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     RtlpHashStringToAtom @ 0x1403F6D70 (RtlpHashStringToAtom.c)
 *     PiDmCompareObjects @ 0x14043D4F0 (PiDmCompareObjects.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14043EC40 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x14043FB88 (PiPnpRtlObjectEventCompareObjects.c)
 *     PropertyEval @ 0x14044115C (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1404413FC (PiDqPropertyCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14045EA20 (PiDqQueryApplyObjectEvent.c)
 *     ConstraintEval @ 0x14045F6D0 (ConstraintEval.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14046082C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiDqActionDataGetChangedProperties @ 0x140460C90 (PiDqActionDataGetChangedProperties.c)
 *     PiSwStopDestroy @ 0x1404967A0 (PiSwStopDestroy.c)
 *     LdrpSearchResourceSection_U @ 0x1404A1680 (LdrpSearchResourceSection_U.c)
 *     GetPropertyFromPropArray @ 0x1404B2F8C (GetPropertyFromPropArray.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404BECFC (PiUEventNotifyDeviceInstanceChange.c)
 *     PiSwDeviceCompareObjects @ 0x1404C4D08 (PiSwDeviceCompareObjects.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404E1078 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 *     PipCheckForDenyExecute @ 0x1404E54A4 (PipCheckForDenyExecute.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404E619C (PiSwDeviceFindInterfaceEntry.c)
 *     StringListContains @ 0x1404E7BA8 (StringListContains.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404EA254 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404EA67C (PiSwDeviceMakeCompatibleIds.c)
 *     _CmIsLocalMachineContainer @ 0x1404EB5BC (_CmIsLocalMachineContainer.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404ECDAC (PiDcUpdateDeviceContainerMembership.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404F0FA8 (PiBuildDeviceNodeInstancePath.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1404F28DC (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwUpdateArrayProperties @ 0x1404F93FC (PiSwUpdateArrayProperties.c)
 *     BiGetNtPartitionPath @ 0x1404FC190 (BiGetNtPartitionPath.c)
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
 *     IopErrorLogThread @ 0x140503EFC (IopErrorLogThread.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140514D5C (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140514FDC (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x1405156FC (PiDevCfgResolveVariable.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140519EF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     DrvDbSuspendDatabase @ 0x1405254B4 (DrvDbSuspendDatabase.c)
 *     SdbpFindMatchingName @ 0x140535F08 (SdbpFindMatchingName.c)
 *     RtlpLangNameInMultiSzString @ 0x140539ADC (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14053A1CC (RtlpMuiRegGetStringIndexInPool.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1405422FC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140549920 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14054CC98 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     ArbShareDriverExclusive @ 0x14054D758 (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x140602FE4 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140604970 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1406066E0 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406096F0 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14060A2CC (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14060C394 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406111CC (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14063D508 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpMatchDeviceString @ 0x14067ED50 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14067F028 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14067F0EC (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x140682514 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryValue @ 0x1406834D4 (AslpFileVerQueryValue.c)
 *     SiIsValidDiskDevice @ 0x140692264 (SiIsValidDiskDevice.c)
 *     _CmMatchLastKnownParentCallback @ 0x140694658 (_CmMatchLastKnownParentCallback.c)
 *     _PnpMultiSzDeleteString @ 0x140699D84 (_PnpMultiSzDeleteString.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14069BA8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14069C28C (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x14069E8FC (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14069F434 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14069FCB8 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1406BBBCC (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1406DB8F8 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x14078353C (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140783E78 (PipPendingServicesFilter.c)
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
