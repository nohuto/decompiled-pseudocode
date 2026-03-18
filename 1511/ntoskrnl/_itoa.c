/*
 * XREFs of _itoa @ 0x140143C3C
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x140143C68 (xtoa.c)
 */

char *__cdecl itoa(int Value, char *Dest, int Radix)
{
  _BOOL8 v4; // r9

  v4 = Radix == 10 && Value < 0;
  xtoa(Value, Dest, Radix, v4);
  return Dest;
}
