/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C0085248
 * Callers:
 *     BmlPinPathContentScaling @ 0x1C00BD4B8 (BmlPinPathContentScaling.c)
 *     BmlInternalTryPinningScaling @ 0x1C00BD748 (BmlInternalTryPinningScaling.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00D5B9C (_EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D5CD0 (DxgkGetAdapterDefaultScaling.c)
 *     DmmGetDefaultScaling @ 0x1C01A3D08 (DmmGetDefaultScaling.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this)
{
  int DriverVersion; // eax
  unsigned int v3; // ecx
  __int64 v5; // rax

  if ( !*((_QWORD *)this + 1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
  v3 = 4;
  if ( DriverVersion < 1105 )
    return 255;
  return v3;
}
