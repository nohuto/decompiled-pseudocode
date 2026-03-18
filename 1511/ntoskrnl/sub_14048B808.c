/*
 * XREFs of sub_14048B808 @ 0x14048B808
 * Callers:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     sub_14048ACC0 @ 0x14048ACC0 (sub_14048ACC0.c)
 *     sub_140543D84 @ 0x140543D84 (sub_140543D84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14048B808(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * __ROL4__(
           a7 ^ *(unsigned __int16 *)(a6 + 2LL * ((a1 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)),
           a3 % 7 + 1);
}
