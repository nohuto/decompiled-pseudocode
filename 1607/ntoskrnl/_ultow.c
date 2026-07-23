/*
 * XREFs of _ultow @ 0x14014D678
 * Callers:
 *     AdtpBuildUlongString @ 0x1406D14E0 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x14014D694 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
