/*
 * XREFs of _ultow @ 0x140143CE8
 * Callers:
 *     AdtpBuildUlongString @ 0x14068CB74 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x140143D04 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
