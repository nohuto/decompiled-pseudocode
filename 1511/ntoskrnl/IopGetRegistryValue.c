/*
 * XREFs of IopGetRegistryValue @ 0x1403BCBA8
 * Callers:
 *     PnpBootDeviceWait @ 0x140133EA8 (PnpBootDeviceWait.c)
 *     IopInitializeOfflineCrashDump @ 0x140135E98 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x14013A6B4 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x14014204C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401BDC74 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1401C0680 (PiDevCfgQueryResolveValue.c)
 *     PnpPrepareDriverLoading @ 0x1403B8F08 (PnpPrepareDriverLoading.c)
 *     PiFindDevInstMatch @ 0x1403B9AEC (PiFindDevInstMatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     IopBuildFullDriverPath @ 0x1403BB854 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     PipCheckForDenyExecute @ 0x1404E54A4 (PipCheckForDenyExecute.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404EF738 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404EFB98 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopGetRegistryValues @ 0x140507B48 (IopGetRegistryValues.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140507FA4 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgVerifyService @ 0x1405117E4 (PiDevCfgVerifyService.c)
 *     PiDevCfgBuildIndirectString @ 0x140512E14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1405156FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     NtEnableLastKnownGood @ 0x140519AD0 (NtEnableLastKnownGood.c)
 *     IopIsReportedAlready @ 0x1405291E0 (IopIsReportedAlready.c)
 *     PnpReadDeviceConfiguration @ 0x14053F6B4 (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14053F7E0 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     PiGetDeviceRegistryProperty @ 0x140600514 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140608F34 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x140609150 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140609AA8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140609B14 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableConstant @ 0x14060AA38 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14060AB00 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14060BCA4 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14060C2B8 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14060C394 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14060CB3C (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14060CD10 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiRearrangeDeviceInstances @ 0x140616D1C (PiRearrangeDeviceInstances.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14069EB98 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipHardwareConfigInit @ 0x14074F610 (PipHardwareConfigInit.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140750B14 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140751608 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140752624 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140752734 (PipCheckDependencies.c)
 *     PiInitCacheGroupInformation @ 0x1407539C0 (PiInitCacheGroupInformation.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140771E68 (IopQueryDeviceResetRegistrySettings.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  PVOID PoolWithTagPriority; // rax
  void *v13; // rdi
  NTSTATUS v14; // ebx
  PVOID PoolWithTag; // rax
  void *v16; // rbx
  NTSTATUS v17; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              Length,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, Length, 0x20206F49u);
    v13 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v14 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTagPriority, Length, &ResultLength);
      if ( v14 >= 0 )
      {
        *a4 = v13;
        return 0;
      }
      ExFreePoolWithTag(v13, 0);
      if ( v14 != -2147483643 && v14 != -1073741789 )
        return v14;
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTag = ExAllocatePoolWithTagPriority(
                        PagedPool,
                        ResultLength,
                        0x20206F49u,
                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20206F49u);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        v17 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, ResultLength, &ResultLength);
        if ( v17 < 0 )
        {
          ExFreePoolWithTag(v16, 0);
          return v17;
        }
        *a4 = v16;
        return 0;
      }
    }
    return -1073741670;
  }
  return result;
}
