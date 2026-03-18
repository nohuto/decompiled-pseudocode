/*
 * XREFs of sub_140497E24 @ 0x140497E24
 * Callers:
 *     sub_1404978C4 @ 0x1404978C4 (sub_1404978C4.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     sub_140576B30 @ 0x140576B30 (sub_140576B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140497E24(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * ((a1 - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
