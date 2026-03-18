/*
 * XREFs of DllMain @ 0x1800FF324
 * Callers:
 *     __DllMainCRTStartup @ 0x1800BB9CC (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
