/*
 * XREFs of _wcsicmp @ 0x1401723FC
 * Callers:
 *     LdrRscIsTypeExist @ 0x14002A384 (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x14002AB60 (LdrpResSearchResourceMappedFile.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14015E210 (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x14016C9B8 (-CompareLangName@@YAHPEBX0@Z.c)
 *     LdrpVerifyAlternateResourceModule @ 0x14016FF6C (LdrpVerifyAlternateResourceModule.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404102D8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PipCheckForDenyExecute @ 0x140417394 (PipCheckForDenyExecute.c)
 *     RtlpHashStringToAtom @ 0x140423FA0 (RtlpHashStringToAtom.c)
 *     PiDmCompareObjects @ 0x140439970 (PiDmCompareObjects.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14043AE64 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x14043B10C (PiPnpRtlObjectEventCompareObjects.c)
 *     PropertyEval @ 0x14043F594 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x14043F850 (PiDqPropertyCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14045A154 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14045B338 (PiSwDeviceMakeCompatibleIds.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14045D640 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14045F46C (PiUEventNotifyTargetDeviceChange.c)
 *     LdrpSearchResourceSection_U @ 0x140462A10 (LdrpSearchResourceSection_U.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140534E10 (PiBuildDeviceNodeInstancePath.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmIsLocalMachineContainer @ 0x1405382C8 (_CmIsLocalMachineContainer.c)
 *     PiSwStopDestroy @ 0x1405388DC (PiSwStopDestroy.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 *     StringListContains @ 0x1405463B8 (StringListContains.c)
 *     ConstraintEval @ 0x140547464 (ConstraintEval.c)
 *     GetPropertyFromPropArray @ 0x14054EF28 (GetPropertyFromPropArray.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140553F00 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405575E8 (PiDqActionDataGetChangedProperties.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140557CC8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140557E44 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiSwDeviceCompareObjects @ 0x140559B30 (PiSwDeviceCompareObjects.c)
 *     PiSwUpdateArrayProperties @ 0x14056A96C (PiSwUpdateArrayProperties.c)
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14057EC8C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     RtlpLangNameInMultiSzString @ 0x140591FD0 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x1405926C0 (RtlpMuiRegGetStringIndexInPool.c)
 *     DrvDbSuspendDatabase @ 0x1405958CC (DrvDbSuspendDatabase.c)
 *     SdbpFindMatchingName @ 0x1405ABA24 (SdbpFindMatchingName.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405B2828 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1405BAD40 (DrvDbOpenDriverDatabaseRegKey.c)
 *     ArbShareDriverExclusive @ 0x1405C4DA4 (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x14067DE50 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x14067F6D4 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140681488 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140683BA8 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406858BC (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140688A94 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14068937C (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140690F40 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1406BDD44 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpMatchDeviceString @ 0x140703BA4 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x140703E7C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140703F40 (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x140707230 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryValue @ 0x140708178 (AslpFileVerQueryValue.c)
 *     SiIsValidDiskDevice @ 0x140711D7C (SiIsValidDiskDevice.c)
 *     _CmMatchLastKnownParentCallback @ 0x1407141F0 (_CmMatchLastKnownParentCallback.c)
 *     _PnpMultiSzDeleteString @ 0x140719D30 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14071B63C (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C048 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x14071EF58 (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14071F650 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14071FED4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x14073C5B0 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x14075E940 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x1407F9CC0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x1407FA5FC (PipPendingServicesFilter.c)
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
