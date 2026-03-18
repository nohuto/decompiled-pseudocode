/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0002078
 * Callers:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00020B4 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00020E4 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C007DB44 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A00B0 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
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
