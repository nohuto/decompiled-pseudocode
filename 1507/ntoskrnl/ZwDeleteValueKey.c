/*
 * XREFs of ZwDeleteValueKey @ 0x1401808F0
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14015E3E4 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     BiZwDeleteValueKey @ 0x14026E1F0 (BiZwDeleteValueKey.c)
 *     PiQueryAndAllocateBootResources @ 0x14045CAAC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14045D384 (PiQueryResourceRequirements.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     PiProcessDriverInstance @ 0x1404E6AB0 (PiProcessDriverInstance.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     ExpWnfDeletePermanentName @ 0x14053F894 (ExpWnfDeletePermanentName.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     NtEnableLastKnownGood @ 0x14058D138 (NtEnableLastKnownGood.c)
 *     PopThermalHandlePreviousShutdown @ 0x14059A040 (PopThermalHandlePreviousShutdown.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14059C324 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x14059DDDC (IopWriteResourceList.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     WdipSemLoadConfigInfo @ 0x1405ADF04 (WdipSemLoadConfigInfo.c)
 *     RtlDeleteRegistryValue @ 0x1405BF730 (RtlDeleteRegistryValue.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x140665540 (CmpDoReDoDeleteValue.c)
 *     PnpSetRegistryRequirementsList @ 0x14067DD40 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14067DD9C (PnpSetRegistryResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiRearrangeDeviceInstances @ 0x1406955BC (PiRearrangeDeviceInstances.c)
 *     SmKmKeyGenNewKey @ 0x1406DD190 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1406FC328 (ExpWnfDeletePermanentStateData.c)
 *     VfUtilClearOneBootSettings @ 0x14073777C (VfUtilClearOneBootSettings.c)
 *     VfZwDeleteValueKey @ 0x140755C2C (VfZwDeleteValueKey.c)
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
