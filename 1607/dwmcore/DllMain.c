/*
 * XREFs of DllMain @ 0x1801136F0
 * Callers:
 *     __DllMainCRTStartup @ 0x1800BE750 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
