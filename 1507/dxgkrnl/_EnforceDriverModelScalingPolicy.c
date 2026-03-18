/*
 * XREFs of _EnforceDriverModelScalingPolicy @ 0x1C00620CC
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00611E8 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C006202C (EnforceDriverModelScalingPolicy.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00966D4 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(__int64 a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1976);
  if ( !*(_BYTE *)(v2 + 133) )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v2 + 16)) >= 1105 )
    {
      if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
        return;
LABEL_6:
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v8, *(_QWORD *)(v5 + 88));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*(_QWORD *)(a1 + 1976) + 88LL));
      v7 = v8;
      *a2 = AdapterDefaultScaling;
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 40));
      return;
    }
    if ( (unsigned int)(*a2 - 4) <= 1 )
      goto LABEL_6;
  }
}
