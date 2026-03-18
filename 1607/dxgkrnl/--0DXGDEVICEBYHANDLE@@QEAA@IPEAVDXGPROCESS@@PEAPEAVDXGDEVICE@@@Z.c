/*
 * XREFs of ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80
 * Callers:
 *     DxgkLock @ 0x1C006E7C0 (DxgkLock.c)
 *     DxgkUnlock @ 0x1C006E9D0 (DxgkUnlock.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C006EB30 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C00703D0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C00704D0 (DxgkMarkDeviceAsError.c)
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0072980 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0072A80 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0072BB0 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C0072F00 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C0073320 (DxgkShutdownBootGraphics.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkCreateAllocation @ 0x1C0076DD0 (DxgkCreateAllocation.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C007EBE0 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C008DAA0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008E68C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008ED3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkQueryResourceInfo @ 0x1C008F430 (DxgkQueryResourceInfo.c)
 *     DxgkCreateContextVirtual @ 0x1C0093FE0 (DxgkCreateContextVirtual.c)
 *     DxgkLock2 @ 0x1C009EBF0 (DxgkLock2.c)
 *     DxgkOfferAllocations @ 0x1C00A3F70 (DxgkOfferAllocations.c)
 *     DxgkUnlock2 @ 0x1C00A54B0 (DxgkUnlock2.c)
 *     DxgkGetDeviceState @ 0x1C00C61B0 (DxgkGetDeviceState.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C00C6868 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSetQueuedLimit @ 0x1C00CCB90 (DxgkSetQueuedLimit.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00CFE10 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D014C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00D1FBC (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00D2760 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkConfigureSharedResource @ 0x1C00D2F70 (DxgkConfigureSharedResource.c)
 *     DxgkQueryAllocationResidency @ 0x1C00DA3A0 (DxgkQueryAllocationResidency.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00DE56C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C0150830 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0153100 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkReclaimAllocations @ 0x1C0153D50 (DxgkReclaimAllocations.c)
 *     DxgkSetAllocationPriority @ 0x1C0153F90 (DxgkSetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0154480 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C0154F90 (DxgkInvalidateCache.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0155620 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0155E10 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkCreateContext @ 0x1C01570A0 (DxgkCreateContext.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0160130 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C01605F0 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0160AD0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkPinDirectFlipResources @ 0x1C01615E0 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C0161A50 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C0161E80 (DxgkUnpinDirectFlipResources.c)
 *     DxgkWaitForIdle @ 0x1C01621B0 (DxgkWaitForIdle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C016C300 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkCreateOverlay @ 0x1C016D600 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C016DAF0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C016DF10 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C016E260 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C016E650 (DxgkUpdateOverlay.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0177610 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkCreateSwapChain @ 0x1C018F860 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C018FFB0 (DxgkOpenSwapChain.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

DXGDEVICEBYHANDLE *__fastcall DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        DXGDEVICEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGDEVICE **a4)
{
  char *v4; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ecx
  struct _KTHREAD *v12; // r8
  int v13; // edx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // r9

  v4 = (char *)(a3 + 23);
  if ( a3 != (struct _KTHREAD **)-184LL && a3[24] == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((unsigned int *)v4 + 4);
      if ( (_DWORD)v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v9, &EventBlockThread, v10, v17);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  v11 = (a2 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)a3 + 56)
    && (v12 = a3[26],
        v13 = *((_DWORD *)v12 + 4 * v11 + 2),
        ((a2 >> 26) & 0x30) == (*((_BYTE *)v12 + 16 * v11 + 8) & 0x30))
    && (v13 & 0x1000) == 0
    && (v13 & 0xF) != 0
    && (*((_BYTE *)v12 + 16 * v11 + 8) & 0xF) == 3 )
  {
    v14 = *((_QWORD *)v12 + 2 * v11);
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)this = v14;
  if ( v14 )
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + 64));
  *a4 = *(struct DXGDEVICE **)this;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
