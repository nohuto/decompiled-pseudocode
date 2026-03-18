/*
 * XREFs of sub_14048B200 @ 0x14048B200
 * Callers:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     sub_14048ACC0 @ 0x14048ACC0 (sub_14048ACC0.c)
 *     sub_140543D84 @ 0x140543D84 (sub_140543D84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14048B200(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * ((a1 - 1) & 1)));
}
