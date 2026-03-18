/*
 * XREFs of _ultow @ 0x140171D68
 * Callers:
 *     AdtpBuildUlongString @ 0x14070CEEC (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x140171D84 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
