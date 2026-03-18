/*
 * XREFs of SetBitAbs @ 0x1C00AEB90
 * Callers:
 *     DoVertDropout @ 0x1C00AE834 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C00FF94C (DoHorizDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0322EE8 || a2 >= dword_1C0322EEC || a3 < dword_1C0322F08 || a3 >= dword_1C0322F04 )
    return 4866LL;
  *(_DWORD *)(a1 + dword_1C0322EF8 * (dword_1C0322F04 - a3 - 1) + 4 * ((__int64)(a2 - dword_1C0322EE8) >> 5)) |= aulBitMask[(a2 - dword_1C0322EE8) & 0x1F];
  return 0LL;
}
