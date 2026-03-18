/*
 * XREFs of IopGetRegistryValue @ 0x1404E79C8
 * Callers:
 *     PnpBootDeviceWait @ 0x14015DD04 (PnpBootDeviceWait.c)
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x14016C0B4 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x140170058 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401F7B88 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FBF38 (PiDevCfgQueryResolveValue.c)
 *     PipCheckForDenyExecute @ 0x140417394 (PipCheckForDenyExecute.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14045D048 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiFindDevInstMatch @ 0x1404E6E58 (PiFindDevInstMatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405504A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140571E34 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpPrepareDriverLoading @ 0x1405729F0 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x140572CFC (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IopGetRegistryValues @ 0x14057E314 (IopGetRegistryValues.c)
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     NtEnableLastKnownGood @ 0x14058D138 (NtEnableLastKnownGood.c)
 *     IopIsReportedAlready @ 0x14059BAAC (IopIsReportedAlready.c)
 *     PnpReadDeviceConfiguration @ 0x1405B3828 (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1405B3D78 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x140682918 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140687EE8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140688EAC (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140688F1C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140689694 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x140689ED0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14068A004 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14068B800 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14068BE74 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14068C788 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14068C9D8 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgVerifyService @ 0x14068CD54 (PiDevCfgVerifyService.c)
 *     PiRearrangeDeviceInstances @ 0x1406955BC (PiRearrangeDeviceInstances.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14071F1E0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407B7C88 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1407B8580 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1407B97AC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1407B98BC (PipCheckDependencies.c)
 *     PiInitCacheGroupInformation @ 0x1407BA388 (PiInitCacheGroupInformation.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1407E8904 (IopQueryDeviceResetRegistrySettings.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
