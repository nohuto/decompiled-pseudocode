/*
 * XREFs of __security_init_cookie @ 0x1C0058010
 * Callers:
 *     FxDriverEntry @ 0x1C0010650 (FxDriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
}
