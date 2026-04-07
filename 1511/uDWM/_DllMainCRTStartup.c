/*
 * XREFs of _DllMainCRTStartup @ 0x18004F958
 * Callers:
 *     _DllMainStartup @ 0x18004B9C0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x18004FD04 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return sub_18004F99C(hinstDLL, fdwReason);
}
