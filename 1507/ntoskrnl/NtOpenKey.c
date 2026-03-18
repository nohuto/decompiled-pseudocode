/*
 * XREFs of NtOpenKey @ 0x1404F5530
 * Callers:
 *     CmLogMcUpdateStatus @ 0x1401E0138 (CmLogMcUpdateStatus.c)
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407D7AB8 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1407D7B24 (CmpSetSystemValues.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 *     IopProtectSystemPartition @ 0x1407E7F0C (IopProtectSystemPartition.c)
 *     CmpAddAliasEntry @ 0x1407F828C (CmpAddAliasEntry.c)
 * Callees:
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, 0, 0LL);
}
