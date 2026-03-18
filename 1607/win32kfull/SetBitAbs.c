/*
 * XREFs of SetBitAbs @ 0x1C00BF288
 * Callers:
 *     DoHorizDropout @ 0x1C00BD3C4 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C00BEF34 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0329308 || a2 >= dword_1C032930C || a3 < dword_1C0329328 || a3 >= dword_1C0329324 )
    return 4866LL;
  *(_DWORD *)(a1 + dword_1C0329318 * (dword_1C0329324 - a3 - 1) + 4 * ((__int64)(a2 - dword_1C0329308) >> 5)) |= aulBitMask[(a2 - dword_1C0329308) & 0x1F];
  return 0LL;
}
