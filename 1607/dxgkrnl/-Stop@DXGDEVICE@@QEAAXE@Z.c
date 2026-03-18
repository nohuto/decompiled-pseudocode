/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C0078684 (OutputDuplProcessDestroyDevice.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0095210 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009D5E0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0151348 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C015D7E8 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C016CA50 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C0173B9C (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Stop(DXGDEVICE *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  DXGOVERLAY *i; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 j; // rdi
  __int64 v12; // rax
  DXGPROCESS *v13; // rcx
  const struct _WNF_STATE_NAME *v14; // rdx
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v19[16]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v20[24]; // [rsp+38h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 1496LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = WdLogNewEntry5_WdEvent(v4);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdEvent(v6);
  if ( !a2 )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 5) + 48LL), &ApcState);
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 357), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v19, *((struct ADAPTER_RENDER **)this + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 41); i != (DXGDEVICE *)((char *)this + 328) && i; i = *(DXGOVERLAY **)i )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL)) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v10 + 24) = 250LL;
        WdLogEvent5_WdAssertion(v10);
      }
      DXGOVERLAY::Destroy(i);
      *((_DWORD *)i + 7) = 3;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, (struct _KTHREAD **)this + 20);
    for ( j = *((_QWORD *)this + 7); j; j = *(_QWORD *)(j + 40) )
      DXGDEVICE::DestroyCoreAllocations(this, (struct DXGRESOURCE *)j, *(struct DXGALLOCATION **)(j + 24));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  *((_DWORD *)this + 94) = 4;
  v12 = WdLogNewEntry5_WdEvent(v7);
  *(_QWORD *)(v12 + 24) = this;
  WdLogEvent5_WdEvent(v12);
  v13 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v18 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v13, v14, &v18, v15) < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = 1577LL;
    WdLogEvent5_WdError(v17);
  }
}
