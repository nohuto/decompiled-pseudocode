/*
 * XREFs of _strset @ 0x14014D9D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strset(char *Dest, int Value)
{
  char *result; // rax

  result = Dest;
  while ( *Dest )
    *Dest++ = Value;
  return result;
}
