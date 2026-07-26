/*
 * XREFs of ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindingsWorkItem(Ndis::BindEngine *this)
{
  bool v2; // bl
  KLockHolder v3; // [rsp+20h] [rbp-28h] BYREF

  this->m_bindThread = KeGetCurrentThread();
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v3, &this->m_lock);
  Ndis::BindEngine::UpdateBindings(this, (struct KLockThisExclusive *)&v3);
  v2 = this->m_removeReadyEvent != 0LL;
  KLockHolder::ReleaseExclusive(&v3);
  if ( v2 )
    KeSetEvent(&this->m_removeReadyEvent->m_event, 0, 0);
  KLockHolder::~KLockHolder(&v3);
}
