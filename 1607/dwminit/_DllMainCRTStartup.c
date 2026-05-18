/*
 * XREFs of _DllMainCRTStartup @ 0x180007C6C
 * Callers:
 *     _DllMainStartup @ 0x180004690 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x180008004 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
