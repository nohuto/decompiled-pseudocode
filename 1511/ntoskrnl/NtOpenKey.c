/*
 * XREFs of NtOpenKey @ 0x1404A5C10
 * Callers:
 *     CmLogMcUpdateStatus @ 0x1401AA1EC (CmLogMcUpdateStatus.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140744BE0 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140744E48 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmGetSystemDriverList @ 0x140753C54 (CmGetSystemDriverList.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 *     IopProtectSystemPartition @ 0x140771860 (IopProtectSystemPartition.c)
 *     CmpAddAliasEntry @ 0x140781EB8 (CmpAddAliasEntry.c)
 * Callees:
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, 0, 0LL);
}
