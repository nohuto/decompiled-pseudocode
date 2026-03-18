/*
 * XREFs of ZwQueryKey @ 0x140159F40
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140125E80 (BiOpenStoreKeyFromObject.c)
 *     BiZwQueryKey @ 0x14012DF78 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x1401CCAC4 (PipIs32bitKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x14049F27C (IopGetDriverNameFromKeyNode.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     _RegRtlQueryInfoKey @ 0x1404E1D04 (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x1404F7538 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x14053FF84 (IopGetRegistryKeyInformation.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C098 (CmpGetAcpiProfileInformation.c)
 *     SepReadAndPopulateCapes @ 0x14056BD0C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140607BC4 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x14062951C (PipCallbackHasDeviceOverrides.c)
 *     PiRearrangeDeviceInstances @ 0x14064B740 (PiRearrangeDeviceInstances.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406541E0 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x140696138 (SepReadAndInsertCaps.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0128 (_RegRtlCopyTreeInternal.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     SepLoadNgenLocations @ 0x1407B7D5C (SepLoadNgenLocations.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeyInformationClass, KeyInformation);
}
