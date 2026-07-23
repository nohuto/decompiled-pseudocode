/*
 * XREFs of _itow @ 0x1800975B0
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x1800976CC (xtow.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Buffer, int Radix)
{
  _BOOL8 v4; // r9

  v4 = Radix == 10 && Value < 0;
  xtow(Value, Buffer, Radix, v4);
  return Buffer;
}
