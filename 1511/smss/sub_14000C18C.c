/*
 * XREFs of sub_14000C18C @ 0x14000C18C
 * Callers:
 *     sub_14000C140 @ 0x14000C140 (sub_14000C140.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_14000C18C(unsigned __int64 *a1)
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
