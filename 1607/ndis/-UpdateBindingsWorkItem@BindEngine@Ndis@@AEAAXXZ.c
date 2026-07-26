/*
 * XREFs of ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A4650
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A4810 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindingsWorkItem(Ndis::BindEngine *this)
{
  bool v2; // bl
  KLockThisExclusive v3; // [rsp+20h] [rbp-28h] BYREF

  this->m_bindThread = KeGetCurrentThread();
  KLockThisExclusive::KLockThisExclusive(&v3, &this->m_lock);
  Ndis::BindEngine::UpdateBindings(this, &v3);
  v2 = this->m_removeReadyEvent != 0LL;
  KLockHolder::ReleaseExclusive(&v3);
  if ( v2 )
    KeSetEvent(&this->m_removeReadyEvent->m_event, 0, 0);
  KLockHolder::~KLockHolder(&v3);
}
