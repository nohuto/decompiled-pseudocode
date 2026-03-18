/*
 * XREFs of ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC
 * Callers:
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00016CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C000A20C (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000DA08 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C00116B4 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00217C0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0026324 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C006E000 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     DxgkEnableUnorderedWaitsForDevice @ 0x1C006E590 (DxgkEnableUnorderedWaitsForDevice.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0071620 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0071920 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkCreateAllocation @ 0x1C0076DD0 (DxgkCreateAllocation.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C007C294 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0085380 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C0089640 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C008BE9C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C008C040 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C0093FE0 (DxgkCreateContextVirtual.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0095C18 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     DxgkOfferAllocations @ 0x1C00A3F70 (DxgkOfferAllocations.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00B3800 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00B4080 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkGetDeviceState @ 0x1C00C61B0 (DxgkGetDeviceState.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CB920 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00CCB90 (DxgkSetQueuedLimit.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C015D370 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0167C5C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C018EC18 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C0093610 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDeviceNoLocks(ADAPTER_RENDER *this, struct DXGDEVICE *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rcx

  v3 = *((_QWORD *)a2 + 5);
  if ( *((_DWORD *)a2 + 76) == 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3 + 152, 0LL);
    *(_QWORD *)(v3 + 160) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
    *((_QWORD *)this + 6) = KeGetCurrentThread();
    ADAPTER_RENDER::DestroyDeviceNoLocksInternal(this, a2);
    *((_QWORD *)this + 6) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v3 + 160) = 0LL;
    v5 = v3 + 152;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3 + 136, 0LL);
    *(_QWORD *)(v3 + 144) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
    *((_QWORD *)this + 4) = KeGetCurrentThread();
    ADAPTER_RENDER::DestroyDeviceNoLocksInternal(this, a2);
    *((_QWORD *)this + 4) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v3 + 144) = 0LL;
    v5 = v3 + 136;
  }
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
