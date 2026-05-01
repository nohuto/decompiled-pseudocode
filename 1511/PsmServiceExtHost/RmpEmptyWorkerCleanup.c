/*
 * XREFs of RmpEmptyWorkerCleanup @ 0x18001BC5C
 * Callers:
 *     RmpEnforcementInfoInitializeCommon @ 0x1800079B4 (RmpEnforcementInfoInitializeCommon.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E6E0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E860 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180018AF0 (PsmRetrieveHostMemoryLimit.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpEmptyWorkerCleanup(_QWORD *a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  void *v4; // rcx

  if ( *a1 )
    result = TpReleaseWork();
  v3 = (void *)a1[1];
  if ( v3 )
    result = NtClose(v3);
  v4 = (void *)a1[2];
  if ( v4 )
    return NtClose(v4);
  return result;
}
