/*
 * XREFs of _ultoa @ 0x1800974A0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x180097520 (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
