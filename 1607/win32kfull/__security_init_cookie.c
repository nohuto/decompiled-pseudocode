/*
 * XREFs of __security_init_cookie @ 0x1C037F2BC
 * Callers:
 *     GsDriverEntry @ 0x1C037F2A0 (GsDriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
}
