/*
 * XREFs of ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734
 * Callers:
 *     ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@UEAAPEAXI@Z @ 0x1C0002350 (--_E-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@UEAAPEAXI@Z.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@UEAAPEAXI@Z @ 0x1C0003130 (--_G-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@UEAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C0003550 (--_EDMMVIDPNTARGET@@UEAAPEAXI@Z.c)
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0003660 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0003D28 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005108 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00051F0 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C000FBB4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00117AC (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ @ 0x1C0033800 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C003386C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     DmmGetAllHMDTargetIdForAdapter @ 0x1C0078F94 (DmmGetAllHMDTargetIdForAdapter.c)
 *     DmmIsTargetHMD @ 0x1C007B5F8 (DmmIsTargetHMD.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C007DCFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z @ 0x1C007E638 (-RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0081148 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0082CBC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00B5ED0 (DmmGetTargetIdFromCcdMonitorId.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C00B613C (DmmAppendCcdConnectedSetForAdapter.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6EE4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9818 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00BC048 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPR.c)
 *     ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00BC240 (-ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00BC68C (--$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPA.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00BF1B0 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DmmGetEmergentSimulatedTarget @ 0x1C00C0E48 (DmmGetEmergentSimulatedTarget.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00C3694 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00C3B08 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00C49F8 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DmmSetViewState @ 0x1C00C4E68 (DmmSetViewState.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DA630 (-CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DA8E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00E216C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00E287C (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3B40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DmmSetTargetForcableState @ 0x1C00F79AC (DmmSetTargetForcableState.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0178D54 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01A0D8C (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01A0E90 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C01A27A0 (-SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z.c)
 *     ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A2E78 (-_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     DmmAdapterPowerChange @ 0x1C01A3260 (DmmAdapterPowerChange.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C01A3D9C (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C01A4348 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C01A49A0 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01A5540 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?ReleaseSourceSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C01A6DF0 (-ReleaseSourceSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z.c)
 *     ?ReleaseTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C01A6FB0 (-ReleaseTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01ABAA4 (BmlGetRecommendedContentSizeForPath.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01ACE7C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall ReferenceCounted::Release(ReferenceCounted *this)
{
  int v1; // ebx
  __int64 v3; // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v1 )
  {
    if ( v1 < 0 )
    {
      v3 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v3 + 24) = v1;
      WdLogEvent5_WdError(v3);
    }
    return v1;
  }
  else
  {
    if ( this )
      (**(void (__fastcall ***)(ReferenceCounted *, __int64))this)(this, 1LL);
    return 0LL;
  }
}
