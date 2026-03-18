/*
 * XREFs of ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C001BCB0
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001CE60 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::GetPnpCapsInternal(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r8
  unsigned int v6; // edi
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rcx
  int (__fastcall *v9)(WDFDEVICE__ *); // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Method = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_Method, &irql, a3);
    v4 = irql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v6 = this->m_PnpStateAndCaps.Value & 0x3FFFF000;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v9 = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v9, v4, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  return v6;
}
