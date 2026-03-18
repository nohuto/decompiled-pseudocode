/*
 * XREFs of HvlpFlushRangeListTb @ 0x140221880
 * Callers:
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1402214D4 (HvlFlushSingleTb.c)
 * Callees:
 *     HvlpAllowFastFlushList @ 0x140221560 (HvlpAllowFastFlushList.c)
 *     HvlpFastFlushListTb @ 0x140221688 (HvlpFastFlushListTb.c)
 *     HvlpPrepareFlushHeader @ 0x140221978 (HvlpPrepareFlushHeader.c)
 *     HvlpSlowFlushListTb @ 0x140221B58 (HvlpSlowFlushListTb.c)
 */

NTSTATUS __fastcall HvlpFlushRangeListTb(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  __int64 v7; // rdx
  __int64 v9; // r8
  __int128 v10[2]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a4;
  LOBYTE(a4) = a3;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int64))HvlpPrepareFlushHeader)(v10, a1, a2, a4);
  v7 = a5;
  if ( a5 <= 0xB && HvlpAllowFastFlushList(v6, a5) )
    return HvlpFastFlushListTb(v10, v6, v7, a6);
  v9 = (unsigned int)v7;
  LOBYTE(v7) = v6;
  return HvlpSlowFlushListTb(v10, v7, v9, a6);
}
