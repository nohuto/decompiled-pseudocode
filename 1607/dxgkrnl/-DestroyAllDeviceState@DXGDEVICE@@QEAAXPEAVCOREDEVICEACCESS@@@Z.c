/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00934E0 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000966C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@?$DXGNODELIST@VDXGDEVICE@@VDXGPAGINGQUEUE@@@@AEBAEXZ @ 0x1C001CEC8 (-IsEmpty@-$DXGNODELIST@VDXGDEVICE@@VDXGPAGINGQUEUE@@@@AEBAEXZ.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C0078684 (OutputDuplProcessDestroyDevice.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C0095144 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00951AC (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C0095BD4 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009D5E0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C015D608 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015D66C (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C015D754 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C015D7A8 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  struct DXGOVERLAY **i; // rsi
  __int64 v8; // rcx
  char v9; // si
  struct DXGCONTEXT **j; // rdi
  __int64 v11; // rax
  unsigned int v12; // edx
  DXGADAPTER *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  void *v15; // rcx
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 712LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v4);
  v6[3] = this;
  v6[4] = *((unsigned int *)this + 77);
  v6[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v6);
  *((_DWORD *)this + 18) = 1;
  DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
  if ( *((_QWORD *)this + 361) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 528LL))();
    *((_QWORD *)this + 361) = 0LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 488LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  for ( i = (struct DXGOVERLAY **)((char *)this + 328); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  if ( *((_DWORD *)this + 94) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 357), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
    if ( *((_QWORD *)this + 71) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1);
      if ( v9 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
      if ( *((DXGDEVICE **)this + 75) != (DXGDEVICE *)((char *)this + 600) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 152LL))(*((_QWORD *)this + 71));
    }
    DXGDEVICE::DrainResources((struct _KTHREAD **)this);
    DXGDEVICE::DrainAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, (struct COREDEVICEACCESS *)a2);
  }
  for ( j = (struct DXGCONTEXT **)((char *)this + 312);
        *j != (struct DXGCONTEXT *)j;
        DXGDEVICE::DestroyContext(this, *j, 0LL) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 75) != (DXGDEVICE *)((char *)this + 600) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v11 + 24) = 852LL;
    WdLogEvent5_WdAssertion(v11);
  }
  while ( !DXGNODELIST<DXGDEVICE,DXGPAGINGQUEUE>::IsEmpty((_QWORD *)this + 43) )
    DXGDEVICE::DestroyPagingQueue(this, *((struct DXGPAGINGQUEUE **)this + 43), 0LL);
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  v12 = *((_DWORD *)this + 77);
  if ( v12 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v12);
    *((_DWORD *)this + 77) = 0;
  }
  v13 = (DXGADAPTER *)*((_QWORD *)this + 357);
  if ( v13 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v13);
    *((_QWORD *)this + 357) = 0LL;
  }
  v14 = (struct _ERESOURCE *)*((_QWORD *)this + 10);
  if ( v14 )
  {
    ExDeleteResourceLite(v14);
    v15 = (void *)*((_QWORD *)this + 10);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
