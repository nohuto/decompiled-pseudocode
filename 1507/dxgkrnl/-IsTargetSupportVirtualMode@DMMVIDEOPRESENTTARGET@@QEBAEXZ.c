/*
 * XREFs of ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005CD0 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0063918 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089988 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008E76C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C009C3C4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00B7350 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00DC140 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C017F2C4 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C017F830 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C018056C (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C (MonitorIsMonitorVirtualModeDisabled.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // zf
  unsigned int v6; // esi
  __int64 v7; // rdi
  int IsMonitorVirtualModeDisabled; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5) == 0LL;
  v6 = *((_DWORD *)this + 6);
  v20 = 1;
  if ( v4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(
                                   *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL),
                                   v6,
                                   (__int64)&v20,
                                   a4);
  if ( IsMonitorVirtualModeDisabled == -1073741632 )
  {
    if ( !*((_QWORD *)this + 5) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      WdLogEvent5_WdAssertion(v17);
    }
    v14 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
    if ( !*(_QWORD *)(v14 + 8) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      WdLogEvent5_WdAssertion(v18);
    }
    return *(_BYTE *)(*(_QWORD *)(v14 + 8) + 133LL);
  }
  else
  {
    if ( IsMonitorVirtualModeDisabled < 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      WdLogEvent5_WdAssertion(v19);
    }
    return v20 == 0;
  }
}
