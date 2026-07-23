/*
 * XREFs of LdrGetDllPath @ 0x18000C7D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x18000C7F8 (LdrpGetDllPath.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return LdrpGetDllPath((_DWORD)DllName, Flags, (_DWORD)DllPath, 0, 0LL, 0LL, (__int64)SearchPaths);
}
