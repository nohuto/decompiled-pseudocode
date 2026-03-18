/*
 * XREFs of sub_1406ECC3C @ 0x1406ECC3C
 * Callers:
 *     sub_140262060 @ 0x140262060 (sub_140262060.c)
 *     ExpGenuinePolicyPostProcess @ 0x14051DEEC (ExpGenuinePolicyPostProcess.c)
 *     sub_14051DFA0 @ 0x14051DFA0 (sub_14051DFA0.c)
 *     sub_1406ED774 @ 0x1406ED774 (sub_1406ED774.c)
 *     sub_1406ED95C @ 0x1406ED95C (sub_1406ED95C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406ECC3C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
