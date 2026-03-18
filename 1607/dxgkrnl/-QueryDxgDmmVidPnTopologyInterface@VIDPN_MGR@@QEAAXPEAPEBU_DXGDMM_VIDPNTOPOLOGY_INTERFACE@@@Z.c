/*
 * XREFs of ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0084D28
 * Callers:
 *     ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00BBA10 (-GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOL.c)
 *     BmlPinPathContentRotation @ 0x1C00BD56C (BmlPinPathContentRotation.c)
 *     BmlInternalTryPinningScaling @ 0x1C00BD748 (BmlInternalTryPinningScaling.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C01ABD80 (BmlUnPinPartialPathModalityOnPath.c)
 *     BmlUnPinSourceMode @ 0x1C01ABFB0 (BmlUnPinSourceMode.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(
        VIDPN_MGR *this,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a2)
{
  __int64 v4; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *a2 = (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)*((_QWORD *)this + 54);
}
