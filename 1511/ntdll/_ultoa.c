/*
 * XREFs of _ultoa @ 0x180096090
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x180096110 (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
