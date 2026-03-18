/*
 * XREFs of IopGetRegistryValue @ 0x14049F430
 * Callers:
 *     PnpBootDeviceWait @ 0x14013BE80 (PnpBootDeviceWait.c)
 *     IopInitializeOfflineCrashDump @ 0x14013D3BC (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x140143058 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x14014B8DC (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401CA36C (IopAllowRemoteDASD.c)
 *     SecureDump_ReadRegistry @ 0x1401CBE50 (SecureDump_ReadRegistry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF2EC (PiDevCfgQueryResolveValue.c)
 *     PipCheckForDenyExecute @ 0x140487470 (PipCheckForDenyExecute.c)
 *     PnpPrepareDriverLoading @ 0x14049D6CC (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x14049DA9C (IopBuildFullDriverPath.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14049F27C (IopGetDriverNameFromKeyNode.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404C8D70 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404E7890 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x1405385F8 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PiFindDevInstMatch @ 0x140538FDC (PiFindDevInstMatch.c)
 *     IopGetRegistryValues @ 0x140540030 (IopGetRegistryValues.c)
 *     IopIsReportedAlready @ 0x1405551A8 (IopIsReportedAlready.c)
 *     PnpReadDeviceConfiguration @ 0x14057091C (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140572BEC (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A568 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x14063287C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A648 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AD4C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14063D170 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063DFC8 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E354 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x14063E700 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FD2C (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140640340 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640BC8 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140640D9C (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgVerifyService @ 0x14064115C (PiDevCfgVerifyService.c)
 *     PiRearrangeDeviceInstances @ 0x14064B740 (PiRearrangeDeviceInstances.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     NtEnableLastKnownGood @ 0x1406E572C (NtEnableLastKnownGood.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1406E5AF4 (PnpGetDeviceInstanceRegistryValue.c)
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
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
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
