/*
 * XREFs of ZwEnumerateValueKey @ 0x140159EE0
 * Callers:
 *     _RegRtlEnumValue @ 0x1404DF0EC (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x1404F8018 (RtlpQueryRegistryValues.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x1405605D4 (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x1405777B8 (PiDcInitUpdateProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1406540EC (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1406E79F0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406E7C88 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     SepLoadNgenLocations @ 0x1407B7D5C (SepLoadNgenLocations.c)
 *     PiLastGoodCopyKeyContents @ 0x1407B90B4 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index, *(_QWORD *)&KeyValueInformationClass);
}
