/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A5ABC
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A5B6C (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     _lambda_45acac7420f6e2785f1f49a7cce477f4_::_helper_func_cdecl_ @ 0x1C00ACC60 (_lambda_45acac7420f6e2785f1f49a7cce477f4_--_helper_func_cdecl_.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00C95C0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5284 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00A52A8 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00A5328 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  _LIST_ENTRY *p_BindLinks; // rdi
  _LIST_ENTRY *i; // rbx
  __int64 Blink; // rsi
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  KLockThisShared::KLockThisShared((KLockThisShared *)&v7, (struct KPushLockBase *)(qword_1C00837F0 + 16));
  p_BindLinks = &this->BindLinks;
  for ( i = p_BindLinks->Flink; i != p_BindLinks; i = i->Flink )
  {
    Blink = (__int64)i[-5].Blink;
    if ( *(_DWORD *)(Blink + 1520) && ndisReferenceMiniport((__int64)i[-5].Blink) )
    {
      KLockHolder::ReleaseShared(&v7);
      a2(i - 5);
      KLockHolder::AcquireShared(&v7);
      ndisDereferenceMiniport(Blink, 0x1Eu);
    }
  }
  KLockHolder::~KLockHolder(&v7);
}
