/*
 * XREFs of sub_1406C135C @ 0x1406C135C
 * Callers:
 *     sub_1404978C4 @ 0x1404978C4 (sub_1404978C4.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     sub_140576B30 @ 0x140576B30 (sub_140576B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C135C(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * (a7 ^ (unsigned int)*(unsigned __int16 *)(a6 + 2LL * ((a1 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)))
       - __ROR4__(a7, a3 % 0xF + 1);
}
