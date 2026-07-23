/*
 * XREFs of LdrGetDllPath @ 0x1800369E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x180036A08 (LdrpGetDllPath.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return LdrpGetDllPath(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
