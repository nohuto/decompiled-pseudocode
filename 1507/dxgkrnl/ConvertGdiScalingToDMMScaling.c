/*
 * XREFs of ConvertGdiScalingToDMMScaling @ 0x1C00B0564
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00611E8 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     ?_PreVerify@CDS_JOURNAL@CCD_BTL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B04EC (-_PreVerify@CDS_JOURNAL@CCD_BTL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C013AC74 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertGdiScalingToDMMScaling(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v6; // edx
  __int64 v8; // rax

  v4 = (unsigned int)a1;
  v6 = 1;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      *a2 = 3;
      return v6;
    }
    if ( (_DWORD)a1 == 2 )
    {
      *a2 = 2;
      return v6;
    }
    v8 = WdLogNewEntry5_WdWarning(a1, 1LL, a3, a4);
    *(_QWORD *)(v8 + 24) = v4;
    WdLogEvent5_WdWarning(v8);
    v6 = 0;
  }
  *a2 = 253;
  return v6;
}
