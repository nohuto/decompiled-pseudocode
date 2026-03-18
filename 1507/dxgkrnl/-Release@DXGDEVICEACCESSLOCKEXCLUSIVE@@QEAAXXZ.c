/*
 * XREFs of ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98
 * Callers:
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C000176C (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002CCC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C000FB08 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     DxgkMarkDeviceAsError @ 0x1C005B910 (DxgkMarkDeviceAsError.c)
 *     DxgkCreateContextVirtual @ 0x1C00678D0 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContext @ 0x1C00689F0 (DxgkCreateContext.c)
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C0079DB0 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0079E60 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C007A2FC (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0084BFC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00850A0 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00A5CA0 (DxgkSetQueuedLimit.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00A63C0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkConfigureSharedResource @ 0x1C00A99C0 (DxgkConfigureSharedResource.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00AF3A0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00AFF30 (DxgkSetContextSchedulingPriority.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00B07B0 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DA6A4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z @ 0x1C00DB488 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkSetAllocationPriority @ 0x1C012FFE0 (DxgkSetAllocationPriority.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0135474 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0137DA0 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0138250 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkPinDirectFlipResources @ 0x1C0138A10 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C0138D70 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C0139190 (DxgkUnpinDirectFlipResources.c)
 *     DxgkWaitForIdle @ 0x1C01394F0 (DxgkWaitForIdle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0141C60 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkCreateOverlay @ 0x1C0142F50 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0143440 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0143850 (DxgkFlipOverlay.c)
 *     DxgkUpdateOverlay @ 0x1C0143F70 (DxgkUpdateOverlay.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C0144610 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0149A88 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C014EEC0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkCreateSwapChain @ 0x1C01634A0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0163BD0 (DxgkOpenSwapChain.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::Release(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)this + 80LL));
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 2) = 0;
  }
}
