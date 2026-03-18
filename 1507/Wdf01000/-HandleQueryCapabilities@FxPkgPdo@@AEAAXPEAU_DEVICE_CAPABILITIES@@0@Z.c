/*
 * XREFs of ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0011270
 * Callers:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011648 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00999B0 (-_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgPdo::HandleQueryCapabilities(
        FxPkgPdo *this,
        _DEVICE_CAPABILITIES *ReportedCaps,
        _DEVICE_CAPABILITIES *ParentCaps)
{
  _DEVICE_POWER_STATE v5; // eax
  _DEVICE_POWER_STATE v7; // eax
  _DEVICE_POWER_STATE v8; // eax
  _DEVICE_POWER_STATE v9; // eax
  _DEVICE_POWER_STATE v10; // eax
  _DEVICE_POWER_STATE v11; // eax
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r8
  int v14; // esi
  int v15; // eax
  int v16; // esi
  __int16 v17; // ax
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // ax
  __int32 SystemWake; // eax
  unsigned int D2Latency; // edx
  unsigned int D1Latency; // eax
  unsigned int D3Latency; // eax
  FxVerifierLock *m_EjectionDeviceList; // rcx
  FxVerifierLock *v28; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  v5 = (this->m_PowerCaps.States >> 4) & 0xF;
  if ( v5 == PowerDeviceMaximum )
    v5 = ParentCaps->DeviceState[1];
  ReportedCaps->DeviceState[1] = v5;
  v7 = (this->m_PowerCaps.States >> 8) & 0xF;
  if ( v7 == PowerDeviceMaximum )
    v7 = ParentCaps->DeviceState[2];
  ReportedCaps->DeviceState[2] = v7;
  v8 = (unsigned __int8)HIBYTE(LOWORD(this->m_PowerCaps.States)) >> 4;
  if ( v8 == PowerDeviceMaximum )
    v8 = ParentCaps->DeviceState[3];
  ReportedCaps->DeviceState[3] = v8;
  v9 = HIWORD(this->m_PowerCaps.States) & 0xF;
  if ( v9 == PowerDeviceMaximum )
    v9 = ParentCaps->DeviceState[4];
  ReportedCaps->DeviceState[4] = v9;
  v10 = (this->m_PowerCaps.States >> 20) & 0xF;
  if ( v10 == PowerDeviceMaximum )
    v10 = ParentCaps->DeviceState[5];
  ReportedCaps->DeviceState[5] = v10;
  v11 = HIBYTE(this->m_PowerCaps.States) & 0xF;
  if ( v11 == PowerDeviceMaximum )
    v11 = ParentCaps->DeviceState[6];
  ReportedCaps->DeviceState[6] = v11;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (m_EjectionDeviceList = (FxVerifierLock *)this[-1].m_EjectionDeviceList) != 0LL )
  {
    FxVerifierLock::Lock(m_EjectionDeviceList, &PreviousIrql, (unsigned __int8)ParentCaps);
    v12 = PreviousIrql;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v14 = this->m_PnpStateAndCaps.Value & 0x3FFFF000;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v28 = (FxVerifierLock *)this[-1].m_EjectionDeviceList) != 0LL )
    FxVerifierLock::Unlock(v28, v12, v13);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v12);
  if ( (v14 & 0x3000) != 0 )
  {
    if ( (v14 & 0x3000) == 0x1000 )
      *((_DWORD *)ReportedCaps + 1) |= 4u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~4u;
  }
  if ( (v14 & 0xC000) != 0 )
  {
    if ( (v14 & 0xC000) == 0x4000 )
      *((_DWORD *)ReportedCaps + 1) |= 8u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~8u;
  }
  if ( (v14 & 0x30000) != 0 )
  {
    if ( (v14 & 0x30000) == 0x10000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x10u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x10u;
  }
  if ( (v14 & 0xC0000) != 0 )
  {
    if ( (v14 & 0xC0000) == 0x40000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20u;
  }
  if ( (v14 & 0x300000) != 0 )
  {
    if ( (v14 & 0x300000) == 0x100000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x40u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x40u;
  }
  v15 = v14 & 0xC00000;
  if ( (v14 & 0xC00000) == 0x800000 )
  {
    if ( this->m_RawOK )
LABEL_32:
      *((_DWORD *)ReportedCaps + 1) |= 0x80u;
  }
  else
  {
    if ( v15 )
    {
      if ( v15 != 0x400000 )
        goto LABEL_33;
      goto LABEL_32;
    }
    *((_DWORD *)ReportedCaps + 1) &= ~0x80u;
  }
LABEL_33:
  if ( (v14 & 0x3000000) != 0 )
  {
    if ( (v14 & 0x3000000) == 0x1000000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x200u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x200u;
  }
  if ( (v14 & 0xC000000) != 0 )
  {
    if ( (v14 & 0xC000000) == 0x4000000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x4000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x4000u;
  }
  v16 = v14 & 0x30000000;
  if ( v16 )
  {
    if ( v16 == 0x10000000 )
      *((_DWORD *)ReportedCaps + 1) |= 0x20000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x20000u;
  }
  v17 = this->m_PowerCaps.Caps & 0x30;
  if ( v17 )
  {
    if ( v17 == 16 )
      *((_DWORD *)ReportedCaps + 1) |= 0x400u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x400u;
  }
  v18 = this->m_PowerCaps.Caps & 0xC0;
  if ( v18 )
  {
    if ( v18 == 64 )
      *((_DWORD *)ReportedCaps + 1) |= 0x800u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x800u;
  }
  v19 = this->m_PowerCaps.Caps & 0x300;
  if ( v19 )
  {
    if ( v19 == 256 )
      *((_DWORD *)ReportedCaps + 1) |= 0x1000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x1000u;
  }
  v20 = this->m_PowerCaps.Caps & 0xC00;
  if ( v20 )
  {
    if ( v20 == 1024 )
      *((_DWORD *)ReportedCaps + 1) |= 0x2000u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~0x2000u;
  }
  v21 = this->m_PowerCaps.Caps & 3;
  if ( v21 )
  {
    if ( v21 == 1 )
      *((_DWORD *)ReportedCaps + 1) |= 1u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~1u;
  }
  v22 = this->m_PowerCaps.Caps & 0xC;
  if ( v22 )
  {
    if ( v22 == 4 )
      *((_DWORD *)ReportedCaps + 1) |= 2u;
  }
  else
  {
    *((_DWORD *)ReportedCaps + 1) &= ~2u;
  }
  if ( this->m_RawOK )
    *((_DWORD *)ReportedCaps + 1) |= 0x100u;
  ReportedCaps->UINumber = this->m_PnpCapsUINumber;
  ReportedCaps->Address = this->m_PnpCapsAddress;
  LOBYTE(SystemWake) = this->m_PowerCaps.SystemWake;
  if ( (_BYTE)SystemWake == 7 )
    SystemWake = ParentCaps->SystemWake;
  else
    SystemWake = (unsigned __int8)SystemWake;
  ReportedCaps->SystemWake = SystemWake;
  LOBYTE(SystemWake) = this->m_PowerCaps.DeviceWake;
  if ( (_BYTE)SystemWake == 5 )
    SystemWake = ParentCaps->DeviceWake;
  else
    SystemWake = (unsigned __int8)SystemWake;
  ReportedCaps->DeviceWake = SystemWake;
  D2Latency = 0;
  D1Latency = 0;
  if ( this->m_PowerCaps.D1Latency != -1 )
    D1Latency = this->m_PowerCaps.D1Latency;
  ReportedCaps->D1Latency = D1Latency;
  if ( this->m_PowerCaps.D2Latency != -1 )
    D2Latency = this->m_PowerCaps.D2Latency;
  ReportedCaps->D2Latency = D2Latency;
  D3Latency = this->m_PowerCaps.D3Latency;
  if ( D3Latency != -1 )
    ReportedCaps->D3Latency = D3Latency;
}
