/*
 * XREFs of sub_1405174E0 @ 0x1405174E0
 * Callers:
 *     sub_14021299C @ 0x14021299C (sub_14021299C.c)
 *     ExpGenuinePolicyPostProcess @ 0x14048A5CC (ExpGenuinePolicyPostProcess.c)
 *     sub_14048A7D0 @ 0x14048A7D0 (sub_14048A7D0.c)
 *     sub_14066A178 @ 0x14066A178 (sub_14066A178.c)
 *     sub_14066A360 @ 0x14066A360 (sub_14066A360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405174E0(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
