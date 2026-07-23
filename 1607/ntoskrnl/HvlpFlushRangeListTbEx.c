/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x1401C1880
 * Callers:
 *     HvlFlushRangeListTb @ 0x1401C13D4 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1401C1404 (HvlFlushSingleTb.c)
 * Callees:
 *     HvlpAllowFastFlushList @ 0x1401C1490 (HvlpAllowFastFlushList.c)
 *     HvlpCountFlushVaList @ 0x1401C1574 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTbEx @ 0x1401C16E0 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x1401C1B5C (HvlpSlowFlushListTbEx.c)
 */

__int64 __fastcall HvlpFlushRangeListTbEx(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int a5, __int64 *a6)
{
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r10d
  char v11; // r11
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v7 = (unsigned int)v7 | 2;
  v13[0] = a1;
  v13[1] = v7;
  v9 = HvlpCountFlushVaList(a5, a6);
  if ( v9 + (((unsigned int)HvlpFlags >> 8) & 0xF) + 5 <= 0xE && HvlpAllowFastFlushList(v11, v10) )
    return HvlpFastFlushListTbEx(v13, a2, v11, v10, a6, v9);
  LOBYTE(v8) = v11;
  return HvlpSlowFlushListTbEx((unsigned int)v13, a2, v8, v10, (__int64)a6, v9);
}
