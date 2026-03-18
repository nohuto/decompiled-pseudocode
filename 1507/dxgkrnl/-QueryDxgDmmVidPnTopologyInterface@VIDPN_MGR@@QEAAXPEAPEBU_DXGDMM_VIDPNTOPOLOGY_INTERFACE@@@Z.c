/*
 * XREFs of ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0097030
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C009B25C (BmlPinPathContentRotation.c)
 *     BmlInternalTryPinningScaling @ 0x1C009B328 (BmlInternalTryPinningScaling.c)
 *     ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00B0430 (-GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOL.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C017E7D0 (BmlUnPinPartialPathModalityOnPath.c)
 *     BmlUnPinSourceMode @ 0x1C017EA00 (BmlUnPinSourceMode.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(
        VIDPN_MGR *this,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)*((_QWORD *)this + 54);
}
