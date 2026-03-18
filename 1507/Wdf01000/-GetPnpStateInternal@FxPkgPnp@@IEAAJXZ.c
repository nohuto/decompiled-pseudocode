/*
 * XREFs of ?GetPnpStateInternal@FxPkgPnp@@IEAAJXZ @ 0x1C005BB8C
 * Callers:
 *     ?GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C009D804 (-GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::GetPnpStateInternal(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  unsigned int v5; // edi
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v5 = this->m_PnpStateAndCaps.Value & 0xFFF;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Method = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)m_Method, irql, v4);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return v5;
}
