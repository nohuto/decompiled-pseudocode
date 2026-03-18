/*
 * XREFs of _DllMainCRTStartup @ 0x180098CE8
 * Callers:
 *     _DllMainStartup @ 0x180060AA0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800990E4 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
