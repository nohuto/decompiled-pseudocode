/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0128F10 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007A3A0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C0082850 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C008EB04 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C012CA28 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01358F0 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0135F84 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01423A0 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::Stop(DXGDEVICE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  DXGOVERLAY *i; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v22; // r9
  __int64 j; // rdi
  __int64 v24; // rax
  _BYTE v25[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v26[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 1401LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = WdLogNewEntry5_WdEvent(v5, v4, v6, v7);
  *(_QWORD *)(v9 + 24) = this;
  WdLogEvent5_WdEvent(v9);
  if ( !a2 )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 5) + 56LL), &ApcState);
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 2338), this, v14, v15);
    DXGDEVICE::FlushDeferredDestruction((PVOID *)this, 0LL, 0);
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v25, *((struct ADAPTER_RENDER **)this + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 38); i != (DXGDEVICE *)((char *)this + 304) && i; i = *(DXGOVERLAY **)i )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL)) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v21 + 24) = 250LL;
        WdLogEvent5_WdAssertion(v21);
      }
      DXGOVERLAY::Destroy(i);
      *((_DWORD *)i + 7) = 3;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, (struct _KTHREAD **)this + 20);
    for ( j = *((_QWORD *)this + 7); j; j = *(_QWORD *)(j + 40) )
      DXGDEVICE::DestroyCoreAllocations(this, (struct DXGRESOURCE *)j, *(struct DXGALLOCATION **)(j + 24), v22);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  }
  *((_DWORD *)this + 88) = 4;
  v24 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
  *(_QWORD *)(v24 + 24) = this;
  WdLogEvent5_WdEvent(v24);
}
