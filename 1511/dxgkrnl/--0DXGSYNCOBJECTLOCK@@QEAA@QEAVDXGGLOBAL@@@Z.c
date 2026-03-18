/*
 * XREFs of ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0061660 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C008BBBC (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00989D0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00BA7CC (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C00C2440 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E8C00 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C012F268 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0135050 (DxgkUpdateGpuVirtualAddress.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0146794 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0147720 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0152950 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01581E8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0166AEC (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     <none>
 */

DXGSYNCOBJECTLOCK *__fastcall DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK(DXGSYNCOBJECTLOCK *this, struct DXGGLOBAL *const a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)this + 384LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 1385LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return this;
}
