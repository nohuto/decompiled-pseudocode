/*
 * XREFs of ?QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C008FCF4
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00BEF10 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        VIDPN_MGR *this,
        const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **a2)
{
  __int64 v4; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *a2 = (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE *)*((_QWORD *)this + 49);
}
