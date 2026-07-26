/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A41FC
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A42BC (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     _lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_ @ 0x1C00B0490 (_lambda_727c6594aeeec297d735c04587a6780c_--_lambda_invoker_cdecl_.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00CEFE0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00A6E40 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00A6EC0 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  _LIST_ENTRY *p_BindLinks; // rsi
  _LIST_ENTRY *i; // rbx
  __int64 Blink; // rdi
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)(qword_1C0089678 + 16);
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v7);
  p_BindLinks = &this->BindLinks;
  for ( i = p_BindLinks->Flink; i != p_BindLinks; i = i->Flink )
  {
    Blink = (__int64)i[-5].Blink;
    if ( *(_DWORD *)(Blink + 1520) && ndisReferenceMiniport((__int64)i[-5].Blink, 0x20u) )
    {
      KLockHolder::ReleaseShared(&v7);
      a2(i - 5);
      KLockHolder::AcquireShared(&v7);
      ndisDereferenceMiniport(Blink);
    }
  }
  KLockHolder::~KLockHolder(&v7);
}
