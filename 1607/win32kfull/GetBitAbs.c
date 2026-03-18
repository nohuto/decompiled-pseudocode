/*
 * XREFs of GetBitAbs @ 0x1C00BF210
 * Callers:
 *     DoHorizDropout @ 0x1C00BD3C4 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C00BEF34 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0329308 || a2 >= dword_1C032930C || a3 < dword_1C0329314 || a3 >= dword_1C0329310 )
    return 0LL;
  if ( a3 < dword_1C0329324 && a3 >= dword_1C0329328 )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0329308) & 0x1F] & *(_DWORD *)(a1
                                                                                + dword_1C0329318
                                                                                * (dword_1C0329324 - a3 - 1)
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0329308) >> 5)));
  if ( a3 == dword_1C032932C )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0329308) & 0x1F] & *(_DWORD *)(qword_1C0329330
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0329308) >> 5)));
  else
    return 0LL;
}
