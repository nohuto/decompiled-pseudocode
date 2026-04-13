/*
 * XREFs of sub_18001EFF0 @ 0x18001EFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001EFF0(__int64 a1, __int64 a2)
{
  if ( !a2 )
    __fastfail(7u);
  *(_QWORD *)a2 = off_18002E268;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return a2;
}
