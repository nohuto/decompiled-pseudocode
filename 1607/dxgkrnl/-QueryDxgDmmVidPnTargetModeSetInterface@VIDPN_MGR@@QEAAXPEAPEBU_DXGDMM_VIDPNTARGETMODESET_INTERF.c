/*
 * XREFs of ?QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0084CC8
 * Callers:
 *     ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00BDB10 (-AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C01ABD80 (BmlUnPinPartialPathModalityOnPath.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmVidPnTargetModeSetInterface(
        VIDPN_MGR *this,
        const struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE **a2)
{
  __int64 v4; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *a2 = (const struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *)*((_QWORD *)this + 56);
}
