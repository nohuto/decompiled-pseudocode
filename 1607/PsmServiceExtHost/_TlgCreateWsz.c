/*
 * XREFs of _TlgCreateWsz @ 0x180015F14
 * Callers:
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C038 (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C140 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000F498 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180017860 (PsmRetrieveHostMemoryLimit.c)
 *     RmpEnforcementUpdateSwapState @ 0x180018878 (RmpEnforcementUpdateSwapState.c)
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 *     ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180029808 (-LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORI.c)
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18002A7B8 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 *     ?RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002D974 (-RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54 (-RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003599C (-LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180036CA0 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     RmpEnforcementUpdateFreezeState @ 0x1800375CC (RmpEnforcementUpdateFreezeState.c)
 *     RmpSystemTerminateModernHost @ 0x180038014 (RmpSystemTerminateModernHost.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&unk_18003CF20;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
