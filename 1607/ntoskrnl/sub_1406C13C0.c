/*
 * XREFs of sub_1406C13C0 @ 0x1406C13C0
 * Callers:
 *     sub_1404978C4 @ 0x1404978C4 (sub_1404978C4.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     sub_140576B30 @ 0x140576B30 (sub_140576B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C13C0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return *(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROL4__(a7 ^ *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 7 + 1)
       - (a7 >> (a4 % 0xF + 1));
}
