/*
 * XREFs of _EnforceDriverModelScalingPolicy @ 0x1C00AD1D0
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ACF30 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00AD130 (EnforceDriverModelScalingPolicy.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C008DD14 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  int AdapterDefaultScaling; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1984);
  if ( !*(_BYTE *)(v2 + 157) )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v2 + 16)) >= 1105 )
    {
      if ( *a2 != 255 )
        return;
    }
    else if ( (unsigned int)(*a2 - 4) > 1 )
    {
      return;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v8, *(_QWORD *)(v5 + 112));
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*(_QWORD *)(a1 + 1984) + 112LL));
    v7 = v8;
    *a2 = AdapterDefaultScaling;
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v7 + 40));
  }
}
