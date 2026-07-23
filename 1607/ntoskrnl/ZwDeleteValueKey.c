/*
 * XREFs of ZwDeleteValueKey @ 0x14015BB50
 * Callers:
 *     BiZwDeleteValueKey @ 0x14012E638 (BiZwDeleteValueKey.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140894 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     IopReleaseDeviceResources @ 0x1404844F8 (IopReleaseDeviceResources.c)
 *     ExpWnfDeletePermanentName @ 0x1404AE834 (ExpWnfDeletePermanentName.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     PiQueryResourceRequirements @ 0x14050E808 (PiQueryResourceRequirements.c)
 *     PiQueryAndAllocateBootResources @ 0x14050EC10 (PiQueryAndAllocateBootResources.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     PiProcessDriverInstance @ 0x140538D04 (PiProcessDriverInstance.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140556210 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x140557C10 (IopWriteResourceList.c)
 *     CmpSetVersionData @ 0x14055DEE8 (CmpSetVersionData.c)
 *     WdipSemLoadConfigInfo @ 0x140564EA8 (WdipSemLoadConfigInfo.c)
 *     RtlDeleteRegistryValue @ 0x14057D200 (RtlDeleteRegistryValue.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580FE8 (PopThermalHandlePreviousShutdown.c)
 *     CmpDoReDoDeleteValue @ 0x140611988 (CmpDoReDoDeleteValue.c)
 *     PnpSetRegistryRequirementsList @ 0x14062D320 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14062D37C (PnpSetRegistryResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiRearrangeDeviceInstances @ 0x14064B824 (PiRearrangeDeviceInstances.c)
 *     SmKmKeyGenNewKey @ 0x14069867C (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1406BA2D0 (ExpWnfDeletePermanentStateData.c)
 *     NtEnableLastKnownGood @ 0x1406E5864 (NtEnableLastKnownGood.c)
 *     VfUtilClearOneBootSettings @ 0x140702CB0 (VfUtilClearOneBootSettings.c)
 *     PipHardwareConfigInit @ 0x14079930C (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
