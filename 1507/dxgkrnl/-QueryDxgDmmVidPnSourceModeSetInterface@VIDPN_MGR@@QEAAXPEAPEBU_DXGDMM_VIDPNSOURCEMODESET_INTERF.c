/*
 * XREFs of ?QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0097000
 * Callers:
 *     ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00AD010 (-AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 *     BmlUnPinSourceMode @ 0x1C017EA00 (BmlUnPinSourceMode.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmVidPnSourceModeSetInterface(
        VIDPN_MGR *this,
        const struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = (const struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *)*((_QWORD *)this + 55);
}
