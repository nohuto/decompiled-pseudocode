/*
 * XREFs of ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C009002C (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00C84BC (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkShareObjects @ 0x1C00D0730 (DxgkShareObjects.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D2AA0 (DxgkOpenResourceFromNtHandle.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E3A78 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0154480 (DxgkUpdateGpuVirtualAddress.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C016A130 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C016BF80 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C016C300 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0177610 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C017CE7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C018E860 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
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
