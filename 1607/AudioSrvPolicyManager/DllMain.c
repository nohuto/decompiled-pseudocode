/*
 * XREFs of DllMain @ 0x180003B2C
 * Callers:
 *     __DllMainCRTStartup @ 0x180023E64 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
