/*
 * XREFs of ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C001C420
 * Callers:
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C001355C (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00288B0 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryPnpDeviceState(FxPkgPnp *this, unsigned int PnpDeviceState, unsigned __int8 a3)
{
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  int v7; // edi
  unsigned __int8 v8; // r8
  int v9; // ecx
  int v10; // edi
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r8
  int v13; // edi
  int v14; // edi
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rcx
  int (__fastcall *v17)(WDFDEVICE__ *); // rcx
  int (__fastcall *v18)(WDFDEVICE__ *); // rcx
  int (__fastcall *v19)(WDFDEVICE__ *); // rcx
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Method = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_Method, &PreviousIrql, a3);
    v5 = PreviousIrql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v7 = this->m_PnpStateAndCaps.Value & 0xFFF;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v17 = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v17, v5, v6);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v5);
  if ( (v7 & 3) == 1 )
  {
    PnpDeviceState |= 1u;
  }
  else if ( (v7 & 3) == 0 )
  {
    PnpDeviceState &= ~1u;
  }
  v9 = v7 & 0xC;
  if ( v9 == 4 )
  {
    PnpDeviceState |= 2u;
  }
  else if ( (v7 & 0xC) == 0 )
  {
    PnpDeviceState &= ~2u;
  }
  if ( (v7 & 0x30) == 0x10 )
  {
    PnpDeviceState |= 4u;
  }
  else if ( (v7 & 0x30) == 0 )
  {
    PnpDeviceState &= ~4u;
  }
  if ( (v7 & 0xC0) == 0x40 )
  {
    PnpDeviceState |= 0x20u;
  }
  else if ( (v7 & 0xC0) == 0 )
  {
    PnpDeviceState &= ~0x20u;
  }
  if ( (v7 & 0x300) == 0x100 )
  {
    PnpDeviceState |= 8u;
  }
  else if ( (v7 & 0x300) == 0 )
  {
    PnpDeviceState &= ~8u;
  }
  v10 = v7 & 0xC00;
  if ( v10 == 1024 )
  {
    PnpDeviceState |= 0x10u;
  }
  else if ( !v10 )
  {
    PnpDeviceState &= ~0x10u;
  }
  if ( v9 == 8 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v18 = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)v18, &PreviousIrql, v8);
      v11 = PreviousIrql;
    }
    else
    {
      v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    v13 = this->m_PnpStateAndCaps.Value & 0x3FFFF000;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v19, v11, v12);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
    v14 = v13 & 0x30000000;
    if ( v14 == 0x10000000 )
    {
      PnpDeviceState |= 2u;
    }
    else if ( !v14 )
    {
      PnpDeviceState &= ~2u;
    }
  }
  if ( this->m_SpecialFileCount[0]
    || this->m_SpecialFileCount[1]
    || this->m_SpecialFileCount[2]
    || this->m_SpecialFileCount[3] )
  {
    PnpDeviceState |= 0x20u;
  }
  if ( this->m_InternalFailure || this->m_Failed )
    PnpDeviceState |= 4u;
  return PnpDeviceState;
}
