/*
 * XREFs of RmpActivityHostCheckQueueWork @ 0x180017600
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     RmpEnforcementWorkerSynchronize @ 0x180017480 (RmpEnforcementWorkerSynchronize.c)
 *     RmpActivityHostCheckDelete @ 0x180017F40 (RmpActivityHostCheckDelete.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180034470 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800348E0 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpGpuMonitorDisableForHost @ 0x180034EFC (RmpGpuMonitorDisableForHost.c)
 * Callees:
 *     RmpPolicyComputeDesiredState @ 0x1800176C0 (RmpPolicyComputeDesiredState.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x180018374 (RmpEnforcementArmWorkerForActivityHost.c)
 *     RmpEnforcementEmptySignalAbort @ 0x18002B1C8 (RmpEnforcementEmptySignalAbort.c)
 */

__int64 __fastcall RmpActivityHostCheckQueueWork(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 v3; // al
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al

  if ( *(int *)(a1 + 20) < 0 )
    return 0LL;
  v2 = *(_BYTE *)(a1 + 820);
  v3 = RmpPolicyComputeDesiredState((struct _RM_ACTIVITY_HOST *)a1);
  v4 = v3;
  if ( (*(_BYTE *)(a1 + 816) & 3) == 0 && v2 != v3 )
    RmpEnforcementArmWorkerForActivityHost(a1);
  v5 = *(_BYTE *)(a1 + 821);
  if ( (*(_DWORD *)(a1 + 48) != 1 || ((v2 ^ v4) & 0x40) == 0 && (v5 & 0x40) == 0)
    && ((v4 & 8) != 0 || ((v2 | v5) & 8) == 0)
    && ((v4 & 0x10) != 0 || ((v2 | v5) & 0x10) == 0) )
  {
    return 0LL;
  }
  if ( (v5 & 0x27) != 0 )
    RmpEnforcementEmptySignalAbort(a1);
  return 1LL;
}
