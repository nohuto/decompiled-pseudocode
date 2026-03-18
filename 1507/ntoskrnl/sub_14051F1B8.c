/*
 * XREFs of sub_14051F1B8 @ 0x14051F1B8
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     sub_14051E490 @ 0x14051E490 (sub_14051E490.c)
 *     sub_1405BAB98 @ 0x1405BAB98 (sub_1405BAB98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14051F1B8(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(*(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) - a7, a3 % 0x1F + 1);
}
