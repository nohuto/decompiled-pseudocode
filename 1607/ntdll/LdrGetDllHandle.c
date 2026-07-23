/*
 * XREFs of LdrGetDllHandle @ 0x180012180
 * Callers:
 *     CsrClientConnectToServer @ 0x1800751A0 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrGetDllHandleEx @ 0x180012210 (LdrGetDllHandleEx.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  return LdrGetDllHandleEx(1u, DllPath, DllCharacteristics, DllName, DllHandle);
}
