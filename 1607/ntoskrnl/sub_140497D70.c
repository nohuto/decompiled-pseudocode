/*
 * XREFs of sub_140497D70 @ 0x140497D70
 * Callers:
 *     sub_1404978C4 @ 0x1404978C4 (sub_1404978C4.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     sub_140576B30 @ 0x140576B30 (sub_140576B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140497D70(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1) ^ ((unsigned int)*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
                                      * __ROL4__(
                                          a7 ^ *(unsigned __int16 *)(a6
                                                                   + 2LL
                                                                   * ((a1 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)),
                                          a3 % 7 + 1));
}
