/*
 * XREFs of ZwEnumerateValueKey @ 0x14017F250
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     _RegRtlEnumValue @ 0x14058B9D0 (_RegRtlEnumValue.c)
 *     RtlpPopulateLanguageConfigList @ 0x140591544 (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x1405B9CB8 (PiDcInitUpdateProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140688F1C (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14069DBF4 (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1407207CC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140720A68 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     VfZwEnumerateValueKey @ 0x140755F84 (VfZwEnumerateValueKey.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     SepLoadNgenLocations @ 0x1407E3034 (SepLoadNgenLocations.c)
 *     PiLastGoodCopyKeyContents @ 0x1407E43B4 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
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
