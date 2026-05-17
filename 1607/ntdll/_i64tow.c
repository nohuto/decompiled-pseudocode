/*
 * XREFs of _i64tow @ 0x180097580
 * Callers:
 *     <none>
 * Callees:
 *     x64tow @ 0x180097660 (x64tow.c)
 */

wchar_t *__cdecl i64tow(__int64 Value, wchar_t *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  x64tow(Value, Buffer, Radix, v3);
  return Buffer;
}
