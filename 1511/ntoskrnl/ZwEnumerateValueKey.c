/*
 * XREFs of ZwEnumerateValueKey @ 0x140150880
 * Callers:
 *     _RegRtlEnumValue @ 0x1404BA058 (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     PiDcInitUpdateProperties @ 0x1405247C4 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x140539050 (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140609B14 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14061EE74 (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1406A05B0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406A084C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     VfZwEnumerateValueKey @ 0x1406D23BC (VfZwEnumerateValueKey.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 *     SepLoadNgenLocations @ 0x14076DC8C (SepLoadNgenLocations.c)
 *     PiLastGoodCopyKeyContents @ 0x14076EC0C (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140783710 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
