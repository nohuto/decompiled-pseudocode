/*
 * XREFs of ZwQueryKey @ 0x1401508E0
 * Callers:
 *     BiZwQueryKey @ 0x14011BBA4 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x1401BE52C (PipIs32bitKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     _RegRtlQueryInfoKey @ 0x1404B7820 (_RegRtlQueryInfoKey.c)
 *     SepReadAndPopulateCapes @ 0x1404C5E6C (SepReadAndPopulateCapes.c)
 *     RtlpValidateKeyTrust @ 0x1404C9244 (RtlpValidateKeyTrust.c)
 *     PiNormalizeDeviceText @ 0x1404F1278 (PiNormalizeDeviceText.c)
 *     IopGetRegistryKeyInformation @ 0x140507A9C (IopGetRegistryKeyInformation.c)
 *     CmpGetAcpiProfileInformation @ 0x14051D474 (CmpGetAcpiProfileInformation.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1405E84B0 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x1405FF558 (PipCallbackHasDeviceOverrides.c)
 *     PiRearrangeDeviceInstances @ 0x140616D1C (PiRearrangeDeviceInstances.c)
 *     KsepRegistryQueryKeyInformation @ 0x14061EF68 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1406567C8 (SepReadAndInsertCaps.c)
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 *     VfZwQueryKey @ 0x1406D3A68 (VfZwQueryKey.c)
 *     PipInitDeviceOverrideCache @ 0x140753200 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 *     SepLoadNgenLocations @ 0x14076DC8C (SepLoadNgenLocations.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
