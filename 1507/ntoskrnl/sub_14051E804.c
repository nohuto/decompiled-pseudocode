/*
 * XREFs of sub_14051E804 @ 0x14051E804
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     sub_14051E490 @ 0x14051E490 (sub_14051E490.c)
 *     sub_1405BAB98 @ 0x1405BAB98 (sub_1405BAB98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14051E804(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * ((a1 - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
