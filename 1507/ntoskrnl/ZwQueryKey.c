/*
 * XREFs of ZwQueryKey @ 0x14017F2B0
 * Callers:
 *     BiZwQueryKey @ 0x14014FE30 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x1401F9D94 (PipIs32bitKey.c)
 *     RtlpValidateKeyTrust @ 0x1404AAE90 (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     SepReadAndPopulateCapes @ 0x14055C3A8 (SepReadAndPopulateCapes.c)
 *     IopGetRegistryKeyInformation @ 0x14057E268 (IopGetRegistryKeyInformation.c)
 *     CmpGetAcpiProfileInformation @ 0x1405A3214 (CmpGetAcpiProfileInformation.c)
 *     _RegRtlQueryInfoKey @ 0x1405A928C (_RegRtlQueryInfoKey.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14065F9C8 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x14067A090 (PipCallbackHasDeviceOverrides.c)
 *     PiRearrangeDeviceInstances @ 0x1406955BC (PiRearrangeDeviceInstances.c)
 *     KsepRegistryQueryKeyInformation @ 0x14069DCE8 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 *     VfZwQueryKey @ 0x140757630 (VfZwQueryKey.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     SepLoadNgenLocations @ 0x1407E3034 (SepLoadNgenLocations.c)
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
