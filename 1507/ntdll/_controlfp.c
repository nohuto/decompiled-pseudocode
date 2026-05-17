/*
 * XREFs of _controlfp @ 0x18008BD54
 * Callers:
 *     atan @ 0x180085E50 (atan.c)
 *     atan2 @ 0x1800860C0 (atan2.c)
 *     cos @ 0x180086AC0 (cos.c)
 *     sin @ 0x180086EE0 (sin.c)
 *     tan @ 0x180089390 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
