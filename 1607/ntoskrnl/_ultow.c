/*
 * XREFs of _ultow @ 0x14014D108
 * Callers:
 *     AdtpBuildUlongString @ 0x1406D13A8 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x14014D124 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
