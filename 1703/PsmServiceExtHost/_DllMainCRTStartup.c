/*
 * XREFs of _DllMainCRTStartup @ 0x180020C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1800210B0 (__security_init_cookie.c)
 */

BOOL __stdcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return sub_180020C90(hinstDLL, fdwReason);
}
