/*
 * XREFs of ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0092248
 * Callers:
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C01767FC (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0177D78 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 *     DmmIsFunctionalVidPn @ 0x1C017B314 (DmmIsFunctionalVidPn.c)
 * Callees:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008C2C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPN::IsFunctional(DMMVIDPN *this, int a2)
{
  _QWORD *v2; // rbx
  DMMVIDPNPRESENTPATH *v5; // rbx
  DMMVIDPN *v6; // rbx

  v2 = (_QWORD *)((char *)this + 120);
  if ( (_QWORD *)*v2 == v2 )
    return 1;
  v5 = (DMMVIDPNPRESENTPATH *)(*v2 - 8LL);
  if ( !v5 )
    return 1;
  while ( a2 != -3 && a2 != *(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL) || DMMVIDPNPRESENTPATH::IsFunctional(v5) )
  {
    v6 = (DMMVIDPN *)*((_QWORD *)v5 + 1);
    if ( v6 == (DMMVIDPN *)((char *)this + 120) )
      v5 = 0LL;
    else
      v5 = (DMMVIDPN *)((char *)v6 - 8);
    if ( !v5 )
      return 1;
  }
  return 0;
}
