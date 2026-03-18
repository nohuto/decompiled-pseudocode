/*
 * XREFs of ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0060F28 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00623BC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x1C0062660 (DxgkFunctionalizePathsModality.c)
 *     DxgkGetPathsModality @ 0x1C0062B00 (DxgkGetPathsModality.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00644B0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ @ 0x1C009F180 (--1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ.c)
 *     DxgkPersistPathsModality @ 0x1C00B1060 (DxgkPersistPathsModality.c)
 *     DxgkApplyPathsModality @ 0x1C00B1480 (DxgkApplyPathsModality.c)
 *     DxgkFinalizePathsModality @ 0x1C00B1520 (DxgkFinalizePathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkApplyCdsjToPathsModality @ 0x1C00B4480 (DxgkApplyCdsjToPathsModality.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C013AC74 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DxgkCopyPathsModality @ 0x1C01500E0 (DxgkCopyPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C017EC1C (--1CCD_BTL@@AEAA@XZ.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017EF88 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006351C (-BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall CCD_TOPOLOGY::~CCD_TOPOLOGY(CCD_TOPOLOGY *this)
{
  if ( *((_BYTE *)this + 72) )
  {
    BmlFreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 8));
    operator delete(*((void **)this + 8));
  }
  operator delete(*((void **)this + 7));
  CCD_SET_STRING_ID::_Cleanup(this);
}
