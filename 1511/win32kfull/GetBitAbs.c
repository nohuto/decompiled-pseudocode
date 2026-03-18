/*
 * XREFs of GetBitAbs @ 0x1C00A737C
 * Callers:
 *     DoVertDropout @ 0x1C00A7098 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C0104D54 (DoHorizDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C0323C08 || a2 >= dword_1C0323C0C || a3 < dword_1C0323C14 || a3 >= dword_1C0323C10 )
    return 0LL;
  if ( a3 < dword_1C0323C24 && a3 >= dword_1C0323C28 )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0323C08) & 0x1F] & *(_DWORD *)(a1
                                                                                + (dword_1C0323C24 - (__int64)a3 - 1)
                                                                                * dword_1C0323C18
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0323C08) >> 5)));
  if ( a3 == dword_1C0323C2C )
    return (unsigned int)(aulBitMask[(a2 - dword_1C0323C08) & 0x1F] & *(_DWORD *)(qword_1C0323C30
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C0323C08) >> 5)));
  else
    return 0LL;
}
