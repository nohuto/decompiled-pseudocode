/*
 * XREFs of sub_140516FC8 @ 0x140516FC8
 * Callers:
 *     sub_140516C6C @ 0x140516C6C (sub_140516C6C.c)
 * Callees:
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 */

__int64 __fastcall sub_140516FC8(unsigned int a1, int a2, __int64 a3, __int64 a4, int a5, void *a6, __int64 a7)
{
  if ( a1 >= 5 )
    return 3221225485LL;
  else
    return sub_140517000(a1, a2, 0, a5, a6, a7);
}
