/*
 * XREFs of HvlpAllowFastFlushList @ 0x1401C1490
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1401C17FC (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x1401C1880 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAllowFastFlushList(char a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( (HvlEnlightenments & 0x80u) != 0 && (!a1 || (unsigned int)(a2 + 1) <= 0xC) )
    return 1;
  return v2;
}
