/*
 * XREFs of _DllMainCRTStartup @ 0x180025AE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x18002612C (__security_init_cookie.c)
 */

BOOL __stdcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}
