/*
 * XREFs of __security_init_cookie @ 0x14000C360
 * Callers:
 *     NtProcessStartupW @ 0x140004400 (NtProcessStartupW.c)
 * Callees:
 *     __security_init_cookie_ex @ 0x14000C3AC (__security_init_cookie_ex.c)
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    _security_init_cookie_ex(&_security_cookie);
  _security_cookie_complement = ~_security_cookie;
}
