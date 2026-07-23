/*
 * XREFs of IopGetRegistryValue @ 0x14051783C
 * Callers:
 *     PnpBootDeviceWait @ 0x14013C3F0 (PnpBootDeviceWait.c)
 *     IopInitializeOfflineCrashDump @ 0x14013D92C (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x1401435C8 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x14014BE4C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401CA20C (IopAllowRemoteDASD.c)
 *     SecureDump_ReadRegistry @ 0x1401CBD34 (SecureDump_ReadRegistry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF080 (PiDevCfgQueryResolveValue.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14050EB84 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14050F164 (PnpGetDeviceResourcesFromRegistry.c)
 *     PipCheckForDenyExecute @ 0x140512538 (PipCheckForDenyExecute.c)
 *     PnpPrepareDriverLoading @ 0x140515AD8 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x140515EA8 (IopBuildFullDriverPath.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405388F0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140538B38 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PiFindDevInstMatch @ 0x14053951C (PiFindDevInstMatch.c)
 *     IopGetRegistryValues @ 0x140540570 (IopGetRegistryValues.c)
 *     IopIsReportedAlready @ 0x1405556E8 (IopIsReportedAlready.c)
 *     PnpReadDeviceConfiguration @ 0x140570E5C (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14057312C (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x140574C5C (PipApplyFunctionToServiceInstances.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x140632930 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A6FC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AE00 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14063D224 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D290 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063E0AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x14063E7E4 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FE10 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140640424 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640CAC (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140640E80 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgVerifyService @ 0x140641240 (PiDevCfgVerifyService.c)
 *     PiRearrangeDeviceInstances @ 0x14064B824 (PiRearrangeDeviceInstances.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     NtEnableLastKnownGood @ 0x1406E5864 (NtEnableLastKnownGood.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1406E5C2C (PnpGetDeviceInstanceRegistryValue.c)
 *     PipHardwareConfigInit @ 0x14079930C (PipHardwareConfigInit.c)
 *     PipCheckSystemFirmwareUpdated @ 0x14079A898 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x14079B090 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x14079C094 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x14079C1A4 (PipCheckDependencies.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x1407B25EC (PiInitCacheGroupInformation.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1407BCD18 (IopQueryDeviceResetRegistrySettings.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
