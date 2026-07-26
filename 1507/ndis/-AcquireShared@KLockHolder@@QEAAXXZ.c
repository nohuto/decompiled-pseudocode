/*
 * XREFs of ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00A6BB8
 * Callers:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A0DDC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00C541C (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::AcquireShared(KLockHolder *this)
{
  KPushLockBase *m_Lock; // rcx

  KeEnterCriticalRegion();
  m_Lock = this->m_Lock;
  this->m_Region.m_Entered = 1;
  ExAcquirePushLockSharedEx(m_Lock, 0LL);
  this->m_State = Shared;
}
