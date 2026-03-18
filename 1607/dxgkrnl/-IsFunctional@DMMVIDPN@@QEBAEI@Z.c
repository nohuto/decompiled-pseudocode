/*
 * XREFs of ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C007E4E4
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00BCBF8 (_BmlGetPathModalityForAdapter.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A00B0 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0004AC0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
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
