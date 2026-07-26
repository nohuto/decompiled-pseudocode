/*
 * XREFs of ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00C541C
 * Callers:
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00E3B30 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00A6BB8 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 */

KLockThisShared *__fastcall KLockThisShared::KLockThisShared(KLockThisShared *this, struct KPushLockBase *a2)
{
  this->m_State = Unlocked;
  this->m_Lock = a2;
  this->m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(this);
  return this;
}
