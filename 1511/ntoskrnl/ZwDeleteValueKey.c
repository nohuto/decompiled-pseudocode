/*
 * XREFs of ZwDeleteValueKey @ 0x140151F40
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14013AA88 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     BiZwDeleteValueKey @ 0x14021EDC8 (BiZwDeleteValueKey.c)
 *     PiProcessDriverInstance @ 0x1403B9744 (PiProcessDriverInstance.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     ExpWnfDeletePermanentName @ 0x1404C53D0 (ExpWnfDeletePermanentName.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 *     PiQueryAndAllocateBootResources @ 0x1404EF1A4 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1404EFC24 (PiQueryResourceRequirements.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     NtEnableLastKnownGood @ 0x140519AD0 (NtEnableLastKnownGood.c)
 *     CmpSetVersionData @ 0x14051F904 (CmpSetVersionData.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140529A40 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x14052B4A4 (IopWriteResourceList.c)
 *     PopThermalHandlePreviousShutdown @ 0x140530008 (PopThermalHandlePreviousShutdown.c)
 *     WdipSemLoadConfigInfo @ 0x140532A20 (WdipSemLoadConfigInfo.c)
 *     RtlDeleteRegistryValue @ 0x140546434 (RtlDeleteRegistryValue.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x1405ED144 (CmpDoReDoDeleteValue.c)
 *     PnpSetRegistryRequirementsList @ 0x140602ED4 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140602F30 (PnpSetRegistryResourceList.c)
 *     PiRearrangeDeviceInstances @ 0x140616D1C (PiRearrangeDeviceInstances.c)
 *     SmKmKeyGenNewKey @ 0x14065A96C (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x140677B58 (ExpWnfDeletePermanentStateData.c)
 *     VfUtilClearOneBootSettings @ 0x1406B7488 (VfUtilClearOneBootSettings.c)
 *     VfZwDeleteValueKey @ 0x1406D2064 (VfZwDeleteValueKey.c)
 *     PipHardwareConfigInit @ 0x14074F610 (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
