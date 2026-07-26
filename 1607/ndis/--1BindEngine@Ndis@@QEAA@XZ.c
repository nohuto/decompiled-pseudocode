/*
 * XREFs of ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00A4738
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AD04C (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C009C27C (-Wait@KWaitEventBase@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Ndis::BindEngine::~BindEngine(Ndis::BindEngine *this)
{
  KWaitEvent *m_removeReadyEvent; // rcx
  KLockThisExclusive v3; // [rsp+20h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  KLockThisExclusive::KLockThisExclusive(&v3, &this->m_lock);
  if ( this->m_bindThread )
    this->m_removeReadyEvent = (KWaitEvent *)&Event;
  KLockHolder::ReleaseExclusive(&v3);
  m_removeReadyEvent = this->m_removeReadyEvent;
  if ( m_removeReadyEvent )
    KWaitEventBase::Wait(m_removeReadyEvent);
  KLockHolder::~KLockHolder(&v3);
}
