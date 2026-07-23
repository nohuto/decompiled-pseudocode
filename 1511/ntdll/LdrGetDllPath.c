/*
 * XREFs of LdrGetDllPath @ 0x18002F8B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x18002F8D8 (LdrpGetDllPath.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return LdrpGetDllPath(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
