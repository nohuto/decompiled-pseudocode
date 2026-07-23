/*
 * XREFs of _i64toa @ 0x180097390
 * Callers:
 *     <none>
 * Callees:
 *     x64toa @ 0x1800974B0 (x64toa.c)
 */

char *__cdecl i64toa(__int64 Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  x64toa(Value, Buffer, Radix, v3);
  return Buffer;
}
