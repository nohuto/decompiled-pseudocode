/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000957C
 * Callers:
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00095B4 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0009610 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C0171F7C (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPN>::FindByValue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  for ( result = *v2 - 8LL; result; result = v5 == a1 + 24 ? 0LL : v5 - 8 )
  {
    if ( result == a2 )
      break;
    v5 = *(_QWORD *)(result + 8);
  }
  return result;
}
