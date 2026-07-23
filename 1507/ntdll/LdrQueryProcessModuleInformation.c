/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180002FF0
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x180068EE8 (LdrQueryProcessModuleInformationEx.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return LdrQueryProcessModuleInformationEx(
           0,
           2,
           (int)ModuleInformation,
           Size,
           (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ReturnedSize);
}
