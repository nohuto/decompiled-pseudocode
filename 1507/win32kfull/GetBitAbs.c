/*
 * XREFs of GetBitAbs @ 0x1C00AEB10
 * Callers:
 *     DoVertDropout @ 0x1C00AE834 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C00FF94C (DoHorizDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0322EE8 || a2 >= dword_1C0322EEC || a3 < dword_1C0322EF4 || a3 >= dword_1C0322EF0 )
    return 0LL;
  if ( a3 < dword_1C0322F04 && a3 >= dword_1C0322F08 )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0322EE8) & 0x1F] & *(_DWORD *)(a1
                                                                                + (dword_1C0322F04 - (__int64)a3 - 1)
                                                                                * dword_1C0322EF8
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0322EE8) >> 5)));
  if ( a3 == dword_1C0322F0C )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0322EE8) & 0x1F] & *(_DWORD *)(qword_1C0322F10
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0322EE8) >> 5)));
  else
    return 0LL;
}
