/*
 * XREFs of LdrGetDllHandle @ 0x180018950
 * Callers:
 *     CsrClientConnectToServer @ 0x180004320 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x1800F6480 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  return LdrGetDllHandleEx(1u, DllPath, DllCharacteristics, DllName, DllHandle);
}
