/*
 * XREFs of sub_1406AED4C @ 0x1406AED4C
 * Callers:
 *     sub_14022CF8C @ 0x14022CF8C (sub_14022CF8C.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497EE0 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404D0D28 (ExpGenuinePolicyPostProcess.c)
 *     sub_1406AF988 @ 0x1406AF988 (sub_1406AF988.c)
 *     sub_1406AFAE0 @ 0x1406AFAE0 (sub_1406AFAE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406AED4C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
