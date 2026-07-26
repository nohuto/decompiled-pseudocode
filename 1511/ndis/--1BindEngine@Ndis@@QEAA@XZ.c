/*
 * XREFs of ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C0098C28
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00989B0 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C00CE7A0 (-Wait@KWaitEventBase@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::~BindEngine(Ndis::BindEngine *this)
{
  KWaitEvent *m_removeReadyEvent; // rcx
  KLockHolder v3; // [rsp+20h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v3, &this->m_lock);
  if ( this->m_bindThread )
    this->m_removeReadyEvent = (KWaitEvent *)&Event;
  KLockHolder::ReleaseExclusive(&v3);
  m_removeReadyEvent = this->m_removeReadyEvent;
  if ( m_removeReadyEvent )
    KWaitEventBase::Wait(m_removeReadyEvent);
  KLockHolder::~KLockHolder(&v3);
}
