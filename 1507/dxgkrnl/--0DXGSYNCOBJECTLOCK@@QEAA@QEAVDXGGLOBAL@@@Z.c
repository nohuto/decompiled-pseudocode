/*
 * XREFs of ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     DxgkShareObjects @ 0x1C008FB50 (DxgkShareObjects.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00A94F0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C00AEEF0 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DD9A0 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0128C0C (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0140238 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0141C60 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01457C8 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C014D848 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C014EEC0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0153F7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01624B0 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     <none>
 */

DXGSYNCOBJECTLOCK *__fastcall DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK(DXGSYNCOBJECTLOCK *this, struct DXGGLOBAL *const a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 1277LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)this + 312LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v5 + 24) = 1282LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return this;
}
