/*
 * XREFs of ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C008FC64
 * Callers:
 *     sub_1C00A7D7C @ 0x1C00A7D7C (sub_1C00A7D7C.c)
 *     sub_1C00A7E48 @ 0x1C00A7E48 (sub_1C00A7E48.c)
 *     ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00AB700 (-GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOL.c)
 *     sub_1C0182C14 @ 0x1C0182C14 (sub_1C0182C14.c)
 *     sub_1C0182E44 @ 0x1C0182E44 (sub_1C0182E44.c)
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
