/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000CFA8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C006BC58 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00BBB98 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0132F4C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C013A010 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C013A6B4 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0147E00 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C014DEF0 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
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
  DXGOVERLAY *i; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 j; // rdi
  __int64 v18; // rax
  DXGPROCESS *v19; // rcx
  const struct _WNF_STATE_NAME *v20; // rdx
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v25[16]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v26[24]; // [rsp+38h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 1416LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = WdLogNewEntry5_WdEvent(v5, v4, v6, v7);
  *(_QWORD *)(v9 + 24) = this;
  WdLogEvent5_WdEvent(v9);
  if ( !a2 )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 5) + 56LL), &ApcState);
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 354), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0);
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v25, *((struct ADAPTER_RENDER **)this + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 38); i != (DXGDEVICE *)((char *)this + 304) && i; i = *(DXGOVERLAY **)i )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL)) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v16 + 24) = 241LL;
        WdLogEvent5_WdAssertion(v16);
      }
      DXGOVERLAY::Destroy(i);
      *((_DWORD *)i + 7) = 3;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, (struct _KTHREAD **)this + 20);
    for ( j = *((_QWORD *)this + 7); j; j = *(_QWORD *)(j + 40) )
      DXGDEVICE::DestroyCoreAllocations(this, (struct DXGRESOURCE *)j, *(struct DXGALLOCATION **)(j + 24));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  }
  *((_DWORD *)this + 88) = 4;
  v18 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
  *(_QWORD *)(v18 + 24) = this;
  WdLogEvent5_WdEvent(v18);
  v19 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v24 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v19, v20, &v24, v21) < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = 1497LL;
    WdLogEvent5_WdError(v23);
  }
}
