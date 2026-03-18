/*
 * XREFs of NtCreateKey @ 0x1404F4810
 * Callers:
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407D7D8C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpAddAliasEntry @ 0x1407F828C (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407F8674 (CmpSetNetworkValue.c)
 * Callees:
 *     CmCreateKey @ 0x1404F4850 (CmCreateKey.c)
 */

NTSTATUS __stdcall NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  return CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
