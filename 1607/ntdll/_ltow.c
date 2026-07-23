/*
 * XREFs of _ltow @ 0x1800975E0
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x1800976CC (xtow.c)
 */

wchar_t *__cdecl ltow(int Value, wchar_t *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtow(Value, Buffer, Radix, v3);
  return Buffer;
}
