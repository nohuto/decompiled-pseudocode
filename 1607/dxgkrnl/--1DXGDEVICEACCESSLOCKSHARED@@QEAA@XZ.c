/*
 * XREFs of ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C0070680 (DxgkGetContextSchedulingPriority.c)
 *     DxgkQueryResourceInfo @ 0x1C008F430 (DxgkQueryResourceInfo.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C00C7330 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00C84BC (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00D2760 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryAllocationResidency @ 0x1C00DA3A0 (DxgkQueryAllocationResidency.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0154480 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C01612F0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C016E260 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0171D7C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0177610 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 80));
      KeLeaveCriticalRegion();
    }
  }
}
