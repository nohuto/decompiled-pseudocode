/*
 * XREFs of _controlfp @ 0x18009E8A8
 * Callers:
 *     atan @ 0x1800989D0 (atan.c)
 *     atan2 @ 0x180098C40 (atan2.c)
 *     cos @ 0x180099640 (cos.c)
 *     sin @ 0x180099A60 (sin.c)
 *     tan @ 0x18009BED0 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
