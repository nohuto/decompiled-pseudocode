/*
 * XREFs of ZwQueryKey @ 0x14015A4B0
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1401263F0 (BiOpenStoreKeyFromObject.c)
 *     BiZwQueryKey @ 0x14012E4E8 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x1401CC9A8 (PipIs32bitKey.c)
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     _RegRtlQueryInfoKey @ 0x1404C5308 (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x1404DA4C4 (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryKeyInformation @ 0x1405404C4 (IopGetRegistryKeyInformation.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C5D8 (CmpGetAcpiProfileInformation.c)
 *     SepReadAndPopulateCapes @ 0x14056C24C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140607C78 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x1406295D0 (PipCallbackHasDeviceOverrides.c)
 *     PiRearrangeDeviceInstances @ 0x14064B824 (PiRearrangeDeviceInstances.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406542C4 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x14069621C (SepReadAndInsertCaps.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     SepLoadNgenLocations @ 0x1407B7D5C (SepLoadNgenLocations.c)
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
