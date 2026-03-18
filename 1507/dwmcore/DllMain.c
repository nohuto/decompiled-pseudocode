/*
 * XREFs of DllMain @ 0x1800E0C00
 * Callers:
 *     __DllMainCRTStartup @ 0x180098D2C (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
