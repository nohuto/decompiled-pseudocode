/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C008DD14
 * Callers:
 *     sub_1C00A7CC8 @ 0x1C00A7CC8 (sub_1C00A7CC8.c)
 *     sub_1C00A7E48 @ 0x1C00A7E48 (sub_1C00A7E48.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00AD1D0 (_EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00AE2A0 (DxgkGetAdapterDefaultScaling.c)
 *     DmmGetDefaultScaling @ 0x1C017A3FC (DmmGetDefaultScaling.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
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
