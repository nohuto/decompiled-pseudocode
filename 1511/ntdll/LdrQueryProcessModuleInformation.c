/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x18006C240
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x18006C728 (LdrQueryProcessModuleInformationEx.c)
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
