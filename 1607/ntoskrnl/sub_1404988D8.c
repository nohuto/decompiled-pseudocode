/*
 * XREFs of sub_1404988D8 @ 0x1404988D8
 * Callers:
 *     sub_140498354 @ 0x140498354 (sub_140498354.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     sub_140577070 @ 0x140577070 (sub_140577070.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404988D8(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ (a7
                                                                         - (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3)));
}
