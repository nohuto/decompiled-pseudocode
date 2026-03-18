/*
 * XREFs of ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FDF4 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00900C8 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     DmmIsPresentPathInClientVidPnTopology @ 0x1C00AA078 (DmmIsPresentPathInClientVidPnTopology.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00BE454 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00C2644 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00C4540 (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00C4C40 (DmmGetMostImportantActiveVidPnPathTargetsFromSource.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00DCE0C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01776EC (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C0177804 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0178F54 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C017A10C (DmmGetClientVidPnTargetModeInfo.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C017A490 (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C017AB44 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C017AF1C (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     DmmInvalidateActiveVidPn @ 0x1C017B064 (DmmInvalidateActiveVidPn.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C017B414 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C017B624 (DmmIsTargetInClientVidPnTopology.c)
 *     DmmIsVidPnTargetConnectedToSource @ 0x1C017B73C (DmmIsVidPnTargetConnectedToSource.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C017B8A0 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDPN const>::reset(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v4 + 24));
  *a1 = a2;
  return result;
}
