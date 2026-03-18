/*
 * XREFs of ?MakeITableMono@@YAHPEAE@Z @ 0x1C028E200
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C012D188 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MakeITableMono(bool *a1)
{
  unsigned __int8 i; // r8
  unsigned __int8 j; // r9
  unsigned __int8 k; // r10
  bool v5; // al

  for ( i = 0; i < 0x20u; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; k < 0x20u; ++k )
      {
        v5 = (j >> 1) + (i + k) / 4 > 15;
        *a1++ = v5;
      }
    }
  }
  return 1LL;
}
