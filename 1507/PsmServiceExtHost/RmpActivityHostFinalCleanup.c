/*
 * XREFs of RmpActivityHostFinalCleanup @ 0x180009EAC
 * Callers:
 *     PsmRetrieveHostMemoryLimit @ 0x1800090F0 (PsmRetrieveHostMemoryLimit.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010790 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     RmpEmptyWorkerCleanup @ 0x18003AD34 (RmpEmptyWorkerCleanup.c)
 */

int __fastcall RmpActivityHostFinalCleanup(__int64 a1)
{
  int result; // eax
  void *v3; // rcx
  void *v4; // rcx

  if ( *(_QWORD *)(a1 + 744) )
    TpReleaseWork();
  result = RmpEmptyWorkerCleanup(a1 + 792);
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    v3 = *(void **)(a1 + 696);
    if ( v3 )
      result = CloseHandle(v3);
    v4 = *(void **)(a1 + 704);
    if ( v4 )
      return CloseHandle(v4);
  }
  return result;
}
