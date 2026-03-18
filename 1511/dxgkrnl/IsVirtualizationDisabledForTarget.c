/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C00A16BC
 * Callers:
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C005E9E4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A12B0 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00A1E9C (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0183700 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C0184A48 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C00A1780 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(DXGADAPTER *a1, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int IsMonitorVirtualModeDisabled; // ebx
  char v12; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 31309LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *((_QWORD *)a1 + 248);
  if ( !v9 )
  {
    v15 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v15 + 24) = 31314LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(a1, a2, &v17);
  if ( IsMonitorVirtualModeDisabled == -1073741632 )
  {
    v12 = 0;
    IsMonitorVirtualModeDisabled = 0;
  }
  else
  {
    v12 = v17;
  }
  if ( IsMonitorVirtualModeDisabled < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v16 + 24) = IsMonitorVirtualModeDisabled;
    WdLogEvent5_WdAssertion(v16);
  }
  else if ( v12 )
  {
    *a3 = 1;
    *a4 = 1;
  }
  else
  {
    *a3 = *(_BYTE *)(v9 + 157) == 0;
    *a4 = *(_BYTE *)(v9 + 158) == 0;
  }
  return (unsigned int)IsMonitorVirtualModeDisabled;
}
