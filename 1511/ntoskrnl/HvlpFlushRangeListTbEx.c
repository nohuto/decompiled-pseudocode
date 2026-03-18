/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x1402218E0
 * Callers:
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1402214D4 (HvlFlushSingleTb.c)
 * Callees:
 *     HvlpAllowFastFlushList @ 0x140221560 (HvlpAllowFastFlushList.c)
 *     HvlpFastFlushListTbEx @ 0x140221760 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x140221CA8 (HvlpSlowFlushListTbEx.c)
 */

NTSTATUS __fastcall HvlpFlushRangeListTbEx(__int64 a1, int a2, char a3, char a4, int a5, unsigned __int64 *a6)
{
  char v6; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  LODWORD(v7) = a2;
  v8 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v8 = (unsigned int)v8 | 2;
  v9 = a5;
  v11[1] = v8;
  v11[0] = a1;
  if ( a5 + (((unsigned int)HvlpFlags >> 9) & 0xF) + 5 <= 0xE && HvlpAllowFastFlushList(a4, a5) )
    return HvlpFastFlushListTbEx(v11, v7, v6, v9, a6);
  else
    return HvlpSlowFlushListTbEx((unsigned int)v11, v7, v6, v9, (__int64)a6);
}
