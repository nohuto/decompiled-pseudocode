/*
 * XREFs of sub_14051E63C @ 0x14051E63C
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     sub_14051E490 @ 0x14051E490 (sub_14051E490.c)
 *     sub_1405BAB98 @ 0x1405BAB98 (sub_1405BAB98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14051E63C(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (__ROR4__(a7, a2 % 0xF + 1) - *(unsigned __int16 *)(a6 + 2LL * (a1 & 3)))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * ((a1 + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}
