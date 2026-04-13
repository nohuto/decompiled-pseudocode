/*
 * XREFs of sub_18000874C @ 0x18000874C
 * Callers:
 *     sub_18000BE40 @ 0x18000BE40 (sub_18000BE40.c)
 *     sub_18000C560 @ 0x18000C560 (sub_18000C560.c)
 *     sub_18000CB50 @ 0x18000CB50 (sub_18000CB50.c)
 *     sub_18000D2D8 @ 0x18000D2D8 (sub_18000D2D8.c)
 *     sub_18000D394 @ 0x18000D394 (sub_18000D394.c)
 *     sub_1800127A8 @ 0x1800127A8 (sub_1800127A8.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 * Callees:
 *     sub_180002510 @ 0x180002510 (sub_180002510.c)
 */

__int64 __fastcall sub_18000874C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_180002510(a1, 1901, (__int64)"internal\\sdk\\inc\\wil\\result.h", 0LL, 0LL, retaddr, 3, a4);
  return a4;
}
