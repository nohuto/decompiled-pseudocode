/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009438C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C0094690 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@?$DXGNODELIST@VDXGDEVICE@@VDXGPAGINGQUEUE@@@@AEBAEXZ @ 0x1C0017254 (-IsEmpty@-$DXGNODELIST@VDXGDEVICE@@VDXGPAGINGQUEUE@@@@AEBAEXZ.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C0079CC0 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0079D3C (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C007A2B8 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007A3A0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C0082850 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C008EB04 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0135710 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0135774 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C013585C (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C01358B0 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // rax
  struct DXGOVERLAY **i; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // di
  struct DXGCONTEXT **j; // rbx
  __int64 v17; // rax
  unsigned int v18; // ebp
  _QWORD *v19; // rbx
  DXGADAPTER *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  void *v22; // rcx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 640LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]);
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, v4, v6, v7);
  v9[3] = this;
  v9[4] = *((unsigned int *)this + 71);
  v9[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v9);
  *((_DWORD *)this + 18) = 1;
  DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u);
  if ( *((_QWORD *)this + 2342) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 528LL))();
    *((_QWORD *)this + 2342) = 0LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 488LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  for ( i = (struct DXGOVERLAY **)((char *)this + 304); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  if ( *((_DWORD *)this + 88) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 2338), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u);
    if ( *((_QWORD *)this + 68) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
      {
        v15 = 0;
      }
      else
      {
        v15 = 1;
        if ( *((_BYTE *)a2 + 64) )
          COREACCESS::Release((COREACCESS *)(a2 + 4));
        COREACCESS::Release((COREACCESS *)(a2 + 1));
      }
      DXGDEVICE::FlushScheduler(this, 1);
      if ( v15 )
      {
        COREACCESS::AcquireShared((COREACCESS *)(a2 + 1));
        if ( *((_BYTE *)a2 + 64) )
          COREACCESS::AcquireShared((COREACCESS *)(a2 + 4));
      }
      if ( *((DXGDEVICE **)this + 72) != (DXGDEVICE *)((char *)this + 576) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 152LL))(*((_QWORD *)this + 68));
    }
    DXGDEVICE::DrainResources((struct _KTHREAD **)this);
    DXGDEVICE::DrainAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, (struct COREDEVICEACCESS *)a2);
  }
  for ( j = (struct DXGCONTEXT **)((char *)this + 288);
        *j != (struct DXGCONTEXT *)j;
        DXGDEVICE::DestroyContext((PERESOURCE *)this, *j, 0LL, v14) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 72) != (DXGDEVICE *)((char *)this + 576) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = 782LL;
    WdLogEvent5_WdAssertion(v17);
  }
  while ( !DXGNODELIST<DXGDEVICE,DXGPAGINGQUEUE>::IsEmpty((_QWORD *)this + 40) )
    DXGDEVICE::DestroyPagingQueue(this, *((struct DXGPAGINGQUEUE **)this + 40), 0LL);
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  v18 = *((_DWORD *)this + 71);
  if ( v18 )
  {
    v19 = (_QWORD *)*((_QWORD *)this + 5);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v19 + 24));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v19 + 27), v18);
    v19[25] = 0LL;
    ExReleasePushLockExclusiveEx(v19 + 24, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 71) = 0;
  }
  v20 = (DXGADAPTER *)*((_QWORD *)this + 2338);
  if ( v20 )
  {
    DXGADAPTER::ReleaseReference(v20);
    *((_QWORD *)this + 2338) = 0LL;
  }
  v21 = (struct _ERESOURCE *)*((_QWORD *)this + 10);
  if ( v21 )
  {
    ExDeleteResourceLite(v21);
    v22 = (void *)*((_QWORD *)this + 10);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
