/*
 * XREFs of LdrFindEntryForAddress @ 0x18003EFF0
 * Callers:
 *     LdrpGetDataModulePath @ 0x18003D1CC (LdrpGetDataModulePath.c)
 *     LdrpIsReparsePoint @ 0x180042D10 (LdrpIsReparsePoint.c)
 *     LdrInitShimEngineDynamic @ 0x1800CA7C0 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x18003F040 (LdrpFindLoadedDllByAddress.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS LoadedDllByAddress; // ebx
  char *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  if ( !DllHandle )
    return -1073741515;
  LoadedDllByAddress = LdrpFindLoadedDllByAddress(DllHandle, &BaseAddress, &v6);
  if ( LoadedDllByAddress >= 0 )
  {
    v4 = (char *)BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    LdrpDereferenceModule(v4);
  }
  return LoadedDllByAddress;
}
