/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A0DDC
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A0EDC (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     _lambda_45acac7420f6e2785f1f49a7cce477f4_::_helper_func_cdecl_ @ 0x1C00B1D80 (_lambda_45acac7420f6e2785f1f49a7cce477f4_--_helper_func_cdecl_.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00D01B0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00A6BB8 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6BE4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00A6C38 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  KPushLockBase *m_Lock; // rsi
  bool m_Entered; // di
  _LIST_ENTRY *p_BindLinks; // r14
  KLockHolder::<unnamed_type_m_State> m_State; // ecx
  _LIST_ENTRY *Flink; // rbx
  __int32 v9; // ecx
  __int64 Blink; // rdi
  KLockHolder v11; // [rsp+20h] [rbp-28h] BYREF

  m_Lock = (KPushLockBase *)(qword_1C0085818 + 16);
  v11.m_Lock = (KPushLockBase *)(qword_1C0085818 + 16);
  KeEnterCriticalRegion();
  m_Entered = 1;
  v11.m_Region.m_Entered = 1;
  ExAcquirePushLockSharedEx(m_Lock, 0LL);
  p_BindLinks = &this->BindLinks;
  m_State = Shared;
  v11.m_State = Shared;
  Flink = p_BindLinks->Flink;
  if ( p_BindLinks->Flink != p_BindLinks )
  {
    do
    {
      Blink = (__int64)Flink[-5].Blink;
      if ( *(_DWORD *)(Blink + 1520) && ndisReferenceMiniport((__int64)Flink[-5].Blink, 0x1Eu) )
      {
        KLockHolder::ReleaseShared(&v11);
        a2(Flink - 5);
        KLockHolder::AcquireShared(&v11);
        ndisDereferenceMiniport(Blink, 0x1Eu);
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_BindLinks );
    m_Entered = v11.m_Region.m_Entered;
    m_Lock = v11.m_Lock;
    m_State = v11.m_State;
  }
  v9 = m_State - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      KLockHolder::ReleaseExclusive(&v11);
      m_Entered = v11.m_Region.m_Entered;
    }
  }
  else
  {
    ExReleasePushLockEx(m_Lock, 0LL);
    m_Entered = 0;
    KeLeaveCriticalRegion();
  }
  if ( m_Entered )
    KeLeaveCriticalRegion();
}
