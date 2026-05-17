/*
 * XREFs of _ultoa @ 0x1800848E0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x180084960 (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
