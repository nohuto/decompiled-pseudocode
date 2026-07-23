/*
 * XREFs of sub_140498B1C @ 0x140498B1C
 * Callers:
 *     sub_140498354 @ 0x140498354 (sub_140498354.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     sub_140577070 @ 0x140577070 (sub_140577070.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140498B1C(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * ((a1 - 1) & 1)));
}
