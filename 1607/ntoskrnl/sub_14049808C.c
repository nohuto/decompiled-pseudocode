/*
 * XREFs of sub_14049808C @ 0x14049808C
 * Callers:
 *     sub_1404978C4 @ 0x1404978C4 (sub_1404978C4.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     sub_140576B30 @ 0x140576B30 (sub_140576B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14049808C(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * ((a1 - 1) & 1)));
}
