/*
 * XREFs of SetBitAbs @ 0x1C00A73FC
 * Callers:
 *     DoVertDropout @ 0x1C00A7098 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C0104D54 (DoHorizDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0323C08 || a2 >= dword_1C0323C0C || a3 < dword_1C0323C28 || a3 >= dword_1C0323C24 )
    return 4866LL;
  *(_DWORD *)(a1 + dword_1C0323C18 * (dword_1C0323C24 - a3 - 1) + 4 * ((__int64)(a2 - dword_1C0323C08) >> 5)) |= aulBitMask[(a2 - dword_1C0323C08) & 0x1F];
  return 0LL;
}
