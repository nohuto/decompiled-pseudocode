/*
 * XREFs of ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009C6F4
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00114C4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C009C27C (-Wait@KWaitEventBase@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(__int64 a1)
{
  KWaitEventBase *i; // rdi
  KLockThisExclusive v3; // [rsp+20h] [rbp-28h] BYREF

  for ( i = (KWaitEventBase *)(a1 + 16); ; KWaitEventBase::Wait(i) )
  {
    KLockThisExclusive::KLockThisExclusive(&v3, (struct KPushLockBase *)(a1 + 8));
    if ( KeReadStateEvent(&i->m_event) )
      break;
    KLockHolder::~KLockHolder(&v3);
  }
  KeClearEvent(&i->m_event);
  *(_DWORD *)a1 = 1;
  KLockHolder::~KLockHolder(&v3);
}
