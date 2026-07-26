/*
 * XREFs of ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5284
 * Callers:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A5984 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A5ABC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00DE0C0 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00A52A8 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 */

KLockThisShared *__fastcall KLockThisShared::KLockThisShared(KLockThisShared *this, struct KPushLockBase *a2)
{
  this->m_State = Unlocked;
  this->m_Lock = a2;
  this->m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(this);
  return this;
}
