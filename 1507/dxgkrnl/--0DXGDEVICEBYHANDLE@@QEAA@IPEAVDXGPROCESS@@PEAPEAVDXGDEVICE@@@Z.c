/*
 * XREFs of ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714
 * Callers:
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005A740 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005AA00 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C005AC90 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C005ADD0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C005B910 (DxgkMarkDeviceAsError.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C005DDD0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C005DEE0 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C005E010 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C005E330 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00678D0 (DxgkCreateContextVirtual.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkCreateContext @ 0x1C00689F0 (DxgkCreateContext.c)
 *     DxgkUnlock @ 0x1C0077510 (DxgkUnlock.c)
 *     DxgkOfferAllocations @ 0x1C00777F0 (DxgkOfferAllocations.c)
 *     DxgkLock @ 0x1C0077AF0 (DxgkLock.c)
 *     DxgkReclaimAllocations @ 0x1C0077F00 (DxgkReclaimAllocations.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0082940 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     DxgkGetDeviceState @ 0x1C00A1800 (DxgkGetDeviceState.c)
 *     DxgkCreateAllocation @ 0x1C00A2D80 (DxgkCreateAllocation.c)
 *     DxgkSetQueuedLimit @ 0x1C00A5CA0 (DxgkSetQueuedLimit.c)
 *     DxgkQueryAllocationResidency @ 0x1C00A8460 (DxgkQueryAllocationResidency.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00A85C0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryResourceInfo @ 0x1C00A8830 (DxgkQueryResourceInfo.c)
 *     DxgkConfigureSharedResource @ 0x1C00A99C0 (DxgkConfigureSharedResource.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C012BE70 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C012E820 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkSetAllocationPriority @ 0x1C012FFE0 (DxgkSetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C0131000 (DxgkInvalidateCache.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C01315B0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C01318A0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0137DA0 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0138250 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkPinDirectFlipResources @ 0x1C0138A10 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C0138D70 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C0139190 (DxgkUnpinDirectFlipResources.c)
 *     DxgkWaitForIdle @ 0x1C01394F0 (DxgkWaitForIdle.c)
 *     DxgkLock2 @ 0x1C0140DB0 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0141150 (DxgkUnlock2.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0141C60 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkCreateOverlay @ 0x1C0142F50 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0143440 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0143850 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0143B90 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0143F70 (DxgkUpdateOverlay.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C0144610 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C0144B48 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C014C488 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C014EEC0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkCreateSwapChain @ 0x1C01634A0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0163BD0 (DxgkOpenSwapChain.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
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

  v4 = (char *)(a3 + 24);
  if ( a3 != (struct _KTHREAD **)-192LL && a3[25] == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v16 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((unsigned int *)v4 + 4);
      if ( (_DWORD)v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v9, &EventBlockThread, v10, v17);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  v11 = (a2 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)a3 + 58)
    && (v12 = a3[27],
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
