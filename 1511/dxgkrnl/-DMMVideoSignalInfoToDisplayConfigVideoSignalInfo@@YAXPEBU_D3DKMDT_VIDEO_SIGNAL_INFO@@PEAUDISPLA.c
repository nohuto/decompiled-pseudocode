/*
 * XREFs of ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00AAA34
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1,
        struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO *a2)
{
  *((_WORD *)a2 + 20) = a1->VideoStandard;
  *((D3DKMDT_2DREGION *)a2 + 4) = a1->TotalSize;
  *((D3DKMDT_2DREGION *)a2 + 3) = a1->ActiveSize;
  *((D3DDDI_RATIONAL *)a2 + 2) = a1->VSyncFreq;
  *((D3DDDI_RATIONAL *)a2 + 1) = a1->HSyncFreq;
  *(_QWORD *)a2 = a1->PixelRate;
  *((_DWORD *)a2 + 11) = (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29;
  *((_DWORD *)a2 + 10) = (unsigned __int16)*((_DWORD *)a2 + 10) | ((*(_DWORD *)&a1->AdditionalSignalInfo & 0x1F8) << 13);
}
