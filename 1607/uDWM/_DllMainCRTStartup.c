/*
 * XREFs of _DllMainCRTStartup @ 0x18004FF3C
 * Callers:
 *     _DllMainStartup @ 0x18004CBE0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800502D4 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
