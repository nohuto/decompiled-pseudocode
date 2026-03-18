/*
 * XREFs of ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C
 * Callers:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C001BF00 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001FBC4 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0068F10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 *     DxgkRender @ 0x1C00763F0 (DxgkRender.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0084360 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkShareObjects @ 0x1C008FB50 (DxgkShareObjects.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     DxgkAcquireHandleDataCB @ 0x1C00A5FD0 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C00A9380 (DxgkReleaseHandleDataCB.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CEA48 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C0124974 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C012CD6C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C0131B90 (-DxgkCddNotifyGdiRendering@@YAJPEAXI@Z.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C0135D28 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     DxgEnumHandleChildrenCB @ 0x1C0137980 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C0137AF0 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleParentCB @ 0x1C0137CC0 (DxgGetHandleParentCB.c)
 *     DxgkFlipOverlay @ 0x1C0143850 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0143B90 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0143F70 (DxgkUpdateOverlay.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C0144B48 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0149A88 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     OutputDuplPresent @ 0x1C01563D4 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0160150 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0160760 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

DXGHANDLETABLELOCKSHARED *__fastcall DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        DXGHANDLETABLELOCKSHARED *this,
        struct DXGPROCESS *a2)
{
  bool v2; // zf
  struct _KTHREAD **v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rax
  __int64 v10; // r9

  v2 = (struct DXGPROCESS *)((char *)a2 + 192) == 0LL;
  v3 = (struct _KTHREAD **)((char *)a2 + 192);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = v3;
  if ( !v2 && v3[1] == KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v9 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *(unsigned int *)(v5 + 16);
      if ( (_DWORD)v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v6, &EventBlockThread, v7, v10);
    }
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  *((_DWORD *)this + 4) = 1;
  return this;
}
