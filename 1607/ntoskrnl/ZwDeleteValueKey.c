/*
 * XREFs of ZwDeleteValueKey @ 0x14015B5E0
 * Callers:
 *     BiZwDeleteValueKey @ 0x14012E0C8 (BiZwDeleteValueKey.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140324 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     ExpWnfDeletePermanentName @ 0x1404C2B04 (ExpWnfDeletePermanentName.c)
 *     IopReleaseDeviceResources @ 0x1404C5E64 (IopReleaseDeviceResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1404C881C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 *     _PnpCtxRegDeleteValue @ 0x1404F0DB4 (_PnpCtxRegDeleteValue.c)
 *     RtlpQueryRegistryValues @ 0x1404F8018 (RtlpQueryRegistryValues.c)
 *     PiProcessDriverInstance @ 0x1405387C4 (PiProcessDriverInstance.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140555CD0 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x1405576D0 (IopWriteResourceList.c)
 *     CmpSetVersionData @ 0x14055D9A8 (CmpSetVersionData.c)
 *     WdipSemLoadConfigInfo @ 0x140564968 (WdipSemLoadConfigInfo.c)
 *     RtlDeleteRegistryValue @ 0x14057CD54 (RtlDeleteRegistryValue.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580B3C (PopThermalHandlePreviousShutdown.c)
 *     CmpDoReDoDeleteValue @ 0x1406118D4 (CmpDoReDoDeleteValue.c)
 *     PnpSetRegistryRequirementsList @ 0x14062D26C (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14062D2C8 (PnpSetRegistryResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiRearrangeDeviceInstances @ 0x14064B740 (PiRearrangeDeviceInstances.c)
 *     SmKmKeyGenNewKey @ 0x140698598 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1406BA198 (ExpWnfDeletePermanentStateData.c)
 *     NtEnableLastKnownGood @ 0x1406E572C (NtEnableLastKnownGood.c)
 *     VfUtilClearOneBootSettings @ 0x140702C80 (VfUtilClearOneBootSettings.c)
 *     PipHardwareConfigInit @ 0x14079930C (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, ValueName, v2);
}
