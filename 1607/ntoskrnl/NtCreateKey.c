/*
 * XREFs of NtCreateKey @ 0x1404640C8
 * Callers:
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407AC64C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpAddAliasEntry @ 0x1407CD4E0 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407CD8C8 (CmpSetNetworkValue.c)
 * Callees:
 *     CmCreateKey @ 0x140464100 (CmCreateKey.c)
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
  return CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, TitleIndex, Class, CreateOptions, Disposition, 0LL);
}
