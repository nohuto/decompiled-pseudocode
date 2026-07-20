/*
 * XREFs of sub_14000C140 @ 0x14000C140
 * Callers:
 *     DriverEntry @ 0x140001020 (DriverEntry.c)
 * Callees:
 *     sub_14000C18C @ 0x14000C18C (sub_14000C18C.c)
 */

uintptr_t sub_14000C140()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    sub_14000C18C(&_security_cookie);
  result = ~_security_cookie;
  qword_14001F008 = ~_security_cookie;
  return result;
}
