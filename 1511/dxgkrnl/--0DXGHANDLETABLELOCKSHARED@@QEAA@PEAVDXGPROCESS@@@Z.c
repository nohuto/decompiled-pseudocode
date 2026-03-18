/*
 * XREFs of ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794
 * Callers:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D158 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001F934 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0088FD0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00B4110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00B4EBC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BB068 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C012AA68 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C01360D0 (-DxgkCddNotifyGdiRendering@@YAJPEAXI@Z.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C013A448 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C013A5C0 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     DxgEnumHandleChildrenCB @ 0x1C013BF30 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C013C0C0 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleDataCB @ 0x1C013C290 (DxgGetHandleDataCB.c)
 *     DxgGetHandleParentCB @ 0x1C013C5C0 (DxgGetHandleParentCB.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C014D8B0 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
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
    *(_QWORD *)(v9 + 24) = 1155LL;
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
