/*
 * XREFs of sub_1406AEC14 @ 0x1406AEC14
 * Callers:
 *     sub_14022D160 @ 0x14022D160 (sub_14022D160.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497450 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404EEC60 (ExpGenuinePolicyPostProcess.c)
 *     sub_1406AF850 @ 0x1406AF850 (sub_1406AF850.c)
 *     sub_1406AF9A8 @ 0x1406AF9A8 (sub_1406AF9A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406AEC14(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
