/*
 * XREFs of ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00A6FD8
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C008F11C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     sub_1C00A6E28 @ 0x1C00A6E28 (sub_1C00A6E28.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00A6FF4 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00C4540 (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     sub_1C00E43EC @ 0x1C00E43EC (sub_1C00E43EC.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01410A0 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C017A10C (DmmGetClientVidPnTargetModeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DmmCalculatePresentationVSync(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1, struct _D3DDDI_RATIONAL *a2)
{
  *a2 = a1->VSyncFreq;
  if ( ((*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F) != 0 )
    a2->Denominator *= (*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F;
}
