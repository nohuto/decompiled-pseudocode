/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C0082A44
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0080DB4 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C008D6CC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00B5ED0 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6EE4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C0D60 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01ACE7C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C01AE170 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0082B20 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(__int64 a1, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  int IsMonitorVirtualModeDisabled; // ebx
  char v11; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 6660LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *(_QWORD *)(a1 + 2128);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = 6665LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(a1, a2, &v16);
  if ( IsMonitorVirtualModeDisabled == -1073741632 )
  {
    v11 = 0;
    IsMonitorVirtualModeDisabled = 0;
  }
  else
  {
    v11 = v16;
  }
  if ( IsMonitorVirtualModeDisabled < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v15 + 24) = IsMonitorVirtualModeDisabled;
    WdLogEvent5_WdAssertion(v15);
  }
  else if ( v11 )
  {
    *a3 = 1;
    *a4 = 1;
  }
  else
  {
    *a3 = *(_BYTE *)(v8 + 133) == 0;
    *a4 = *(_BYTE *)(v8 + 134) == 0;
  }
  return (unsigned int)IsMonitorVirtualModeDisabled;
}
