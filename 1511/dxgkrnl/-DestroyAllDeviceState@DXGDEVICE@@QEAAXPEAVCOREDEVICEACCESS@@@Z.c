/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006AC6C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C006AF64 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00019F4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C006BC58 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C006CD44 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C006CDAC (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C006D594 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C006D5D8 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C006E298 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00BBB98 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0139F18 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0139F7C (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C0139FD0 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct DXGOVERLAY **i; // rsi
  char v7; // si
  __int64 v8; // rcx
  struct DXGCONTEXT **j; // rdi
  unsigned int v10; // edx
  DXGADAPTER *v11; // rcx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 652LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]);
  v5 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v5[3] = this;
  v5[4] = *((unsigned int *)this + 71);
  v5[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v5);
  *((_DWORD *)this + 18) = 1;
  DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u);
  if ( *((_QWORD *)this + 358) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 528LL))();
    *((_QWORD *)this + 358) = 0LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 536LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  for ( i = (struct DXGOVERLAY **)((char *)this + 304); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  if ( *((_DWORD *)this + 88) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 354), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u);
    if ( *((_QWORD *)this + 68) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
      {
        v7 = 0;
      }
      else
      {
        v7 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL);
      if ( v7 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
      if ( *((DXGDEVICE **)this + 72) != (DXGDEVICE *)((char *)this + 576) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 152LL))(*((_QWORD *)this + 68));
    }
    DXGDEVICE::DrainResources(this);
    DXGDEVICE::DrainAllocations(this);
    DXGDEVICE::DestroyDevice(this, (struct COREDEVICEACCESS *)a2);
  }
  for ( j = (struct DXGCONTEXT **)((char *)this + 288);
        *j != (struct DXGCONTEXT *)j;
        DXGDEVICE::DestroyContext(this, *j, 0LL) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 72) != (DXGDEVICE *)((char *)this + 576) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 794LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGDEVICE::DestroyAllPagingQueues(this);
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  v10 = *((_DWORD *)this + 71);
  if ( v10 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v10);
    *((_DWORD *)this + 71) = 0;
  }
  v11 = (DXGADAPTER *)*((_QWORD *)this + 354);
  if ( v11 )
  {
    DXGADAPTER::ReleaseReference(v11);
    *((_QWORD *)this + 354) = 0LL;
  }
  v12 = (struct _ERESOURCE *)*((_QWORD *)this + 10);
  if ( v12 )
  {
    ExDeleteResourceLite(v12);
    operator delete(*((void **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
