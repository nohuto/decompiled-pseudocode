/*
 * XREFs of ?QueryDxgMiniportVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0084DE8
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00BD800 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgMiniportVidPnSourceModeSetInterface(
        VIDPN_MGR *this,
        const struct _DXGK_VIDPNSOURCEMODESET_INTERFACE **a2)
{
  __int64 v4; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *a2 = (const struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *)*((_QWORD *)this + 48);
}
