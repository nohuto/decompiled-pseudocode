/*
 * XREFs of ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8
 * Callers:
 *     ?RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0004288 (-RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0010F30 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C0011288 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C005B400 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     DxgkMarkDeviceAsError @ 0x1C005C8A0 (DxgkMarkDeviceAsError.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0067A34 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C0067ED8 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C006CFB8 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C006D670 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00881A0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0089140 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C008B4D0 (DxgkDestroyDevice.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C008D280 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00989D0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009F538 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkSetDisplayMode @ 0x1C00AF380 (DxgkSetDisplayMode.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00AF7A0 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkConfigureSharedResource @ 0x1C00BCA20 (DxgkConfigureSharedResource.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00BF380 (DxgkSetContextSchedulingPriority.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00BF510 (DxgkSetContextInProcessSchedulingPriority.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00C9138 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkSetAllocationPriority @ 0x1C0134B70 (DxgkSetAllocationPriority.c)
 *     DxgkCreateContext @ 0x1C01378F0 (DxgkCreateContext.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C013A5C0 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C013C6A0 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C013CB50 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkPinDirectFlipResources @ 0x1C013D310 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C013D770 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C013DB90 (DxgkUnpinDirectFlipResources.c)
 *     DxgkWaitForIdle @ 0x1C013DEB0 (DxgkWaitForIdle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0147720 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkCreateOverlay @ 0x1C01488D0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0148DC0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C01491D0 (DxgkFlipOverlay.c)
 *     DxgkUpdateOverlay @ 0x1C0149900 (DxgkUpdateOverlay.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C014D8B0 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C014DFF0 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     OutputDuplPresent @ 0x1C015A6B4 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0164410 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0164A80 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkCreateSwapChain @ 0x1C01679D0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0168100 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003FCC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKEXCLUSIVE *__fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        DXGDEVICEACCESSLOCKEXCLUSIVE *this,
        struct DXGDEVICE *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = a2;
  if ( a2 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(this);
  return this;
}
