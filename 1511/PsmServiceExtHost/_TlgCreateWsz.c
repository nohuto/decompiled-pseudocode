/*
 * XREFs of _TlgCreateWsz @ 0x180019D30
 * Callers:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpEnforcementUpdateSwapState @ 0x18001CB14 (RmpEnforcementUpdateSwapState.c)
 *     RmgrSrv_RmTestGetApplicationProperties @ 0x180037730 (RmgrSrv_RmTestGetApplicationProperties.c)
 *     RmgrSrv_RmTestGetResourceSetTypeFromPSMKey @ 0x180037CB0 (RmgrSrv_RmTestGetResourceSetTypeFromPSMKey.c)
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x18003E2B8 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18003E654 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18003F56C (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800434E0 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 *     ?OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180045910 (-OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&unk_1800574EC;
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
