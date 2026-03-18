/*
 * XREFs of ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C
 * Callers:
 *     DxgkShareObjects @ 0x1C008FB50 (DxgkShareObjects.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00A94F0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C00AEEF0 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DD9A0 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
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

void __fastcall DXGSYNCOBJECTLOCK::AcquireShared(DXGSYNCOBJECTLOCK *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v3[3] = 275LL;
    v3[4] = 4LL;
    v3[5] = this;
    v3[6] = 0LL;
    v3[7] = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  v2 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 312), 1u);
  *((_BYTE *)this + 8) = 1;
}
