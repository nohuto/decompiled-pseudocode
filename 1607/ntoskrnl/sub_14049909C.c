/*
 * XREFs of sub_14049909C @ 0x14049909C
 * Callers:
 *     sub_140498354 @ 0x140498354 (sub_140498354.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     sub_140577070 @ 0x140577070 (sub_140577070.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14049909C(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return (a7 >> (a4 % 0xF + 1)) ^ (*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
                                 * __ROL4__(
                                     a7
                                   - *(unsigned __int16 *)(a6
                                                         + 2LL * ((a1 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)),
                                     a3 % 7 + 1));
}
