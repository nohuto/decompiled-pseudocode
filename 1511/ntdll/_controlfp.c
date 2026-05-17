/*
 * XREFs of _controlfp @ 0x18009D4F4
 * Callers:
 *     atan @ 0x180097610 (atan.c)
 *     atan2 @ 0x180097880 (atan2.c)
 *     cos @ 0x180098280 (cos.c)
 *     sin @ 0x1800986A0 (sin.c)
 *     tan @ 0x18009AB40 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
