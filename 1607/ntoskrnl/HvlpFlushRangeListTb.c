/*
 * XREFs of HvlpFlushRangeListTb @ 0x1401C17FC
 * Callers:
 *     HvlFlushRangeListTb @ 0x1401C13D4 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1401C1404 (HvlFlushSingleTb.c)
 * Callees:
 *     HvlpAllowFastFlushList @ 0x1401C1490 (HvlpAllowFastFlushList.c)
 *     HvlpCountFlushVaList @ 0x1401C1574 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTb @ 0x1401C1614 (HvlpFastFlushListTb.c)
 *     HvlpPrepareFlushHeader @ 0x1401C1938 (HvlpPrepareFlushHeader.c)
 *     HvlpSlowFlushListTb @ 0x1401C1A10 (HvlpSlowFlushListTb.c)
 */

__int64 __fastcall HvlpFlushRangeListTb(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  char v6; // bl
  int v7; // edx
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  __int64 *v10; // r11
  __int128 v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  LOBYTE(a4) = a3;
  HvlpPrepareFlushHeader(v12, a1, a2, a4);
  v8 = HvlpCountFlushVaList(a5, a6);
  if ( v8 <= 0xB && HvlpAllowFastFlushList(v6, v9) )
    return HvlpFastFlushListTb(v12, v6, v9, v10, v8);
  LOBYTE(v7) = v6;
  return HvlpSlowFlushListTb((unsigned int)v12, v7, v9, (_DWORD)v10, v8);
}
