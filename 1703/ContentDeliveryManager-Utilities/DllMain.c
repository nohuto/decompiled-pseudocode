/*
 * XREFs of DllMain @ 0x18001FF08
 * Callers:
 *     __DllMainCRTStartup @ 0x18006F150 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
