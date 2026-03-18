/*
 * XREFs of HvlpPrepareFlushHeader @ 0x140221978
 * Callers:
 *     HvlpFastFlushAddressSpaceTb @ 0x140221584 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFlushRangeListTb @ 0x140221880 (HvlpFlushRangeListTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1402219C8 (HvlpSlowFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpAffinityToVirtualAffinity @ 0x1401AE7F8 (HvlpAffinityToVirtualAffinity.c)
 */

__int64 __fastcall HvlpPrepareFlushHeader(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v5; // r11
  int v6; // r10d
  unsigned int v7; // r10d
  unsigned __int64 v8; // rax
  __int64 result; // rax

  v5 = a1;
  v6 = a4 == 0 ? 4 : 0;
  if ( !a2 )
    v6 |= 2u;
  if ( a3 )
  {
    v8 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(a3 + 8));
    v5[2] = v8;
  }
  else
  {
    v7 = v6 | 1;
    a1[2] = 0LL;
  }
  result = v7;
  v5[1] = v7;
  *v5 = a2;
  return result;
}
