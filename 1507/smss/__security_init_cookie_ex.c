/*
 * XREFs of __security_init_cookie_ex @ 0x14000C3AC
 * Callers:
 *     __security_init_cookie @ 0x14000C360 (__security_init_cookie.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall _security_init_cookie_ex(unsigned __int64 *a1)
{
  unsigned __int64 *result; // rax

  *a1 = ((unsigned __int64)a1 ^ (unsigned int)(((unsigned __int64)MEMORY[0x7FFE0004] * MEMORY[0x7FFE0320]) >> 24)) & 0xFFFFFFFFFFFFLL;
  if ( !*a1 || (result = a1, *a1 == 0x2B992DDFA232LL) )
  {
    result = a1;
    *a1 = 0x2B992DDFA233LL;
  }
  return result;
}
