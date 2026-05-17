/*
 * XREFs of _ui64tow @ 0x180097620
 * Callers:
 *     <none>
 * Callees:
 *     x64tow @ 0x180097660 (x64tow.c)
 */

wchar_t *__cdecl ui64tow(unsigned __int64 Value, wchar_t *Buffer, int Radix)
{
  x64tow(Value, Buffer, Radix, 0LL);
  return Buffer;
}
