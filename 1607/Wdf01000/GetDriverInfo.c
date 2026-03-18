/*
 * XREFs of GetDriverInfo @ 0x1C0080900
 * Callers:
 *     LogDriverInfoStream @ 0x1C0080C00 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDriverInfo(_FX_DRIVER_GLOBALS *Globals, FxDevice *Fdo, FxTelemetryDriverInfo *DriverInfo)
{
  unsigned __int8 Enabled; // r10
  unsigned int v4; // r11d
  unsigned int v5; // eax
  FxPkgPnp *m_PkgPnp; // rbx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int16 m_DeviceTelemetryInfoFlags; // di
  unsigned int v9; // eax
  char v10; // cl
  FxPowerPolicyOwnerSettings *m_Owner; // r11
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned __int8 WakeFromS0Capable; // al
  unsigned int v15; // ecx
  unsigned __int8 v16; // al
  bool v17; // al
  FxPowerPolicyOwnerSettings *v18; // rax
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // ecx

  Enabled = 0;
  DriverInfo->Dword ^= (DriverInfo->Dword ^ (4 * Globals->FxVerifierOn)) & 4;
  v4 = DriverInfo->Dword ^ (DriverInfo->Dword ^ (8 * ((unsigned __int16)Globals->FxEnhancedVerifierOptions != 0))) & 8;
  DriverInfo->Dword = v4;
  if ( Fdo )
  {
    m_PkgPnp = Fdo->m_PkgPnp;
    m_DeviceObject = Fdo->m_DeviceObject.m_DeviceObject;
    m_DeviceTelemetryInfoFlags = Fdo->m_DeviceTelemetryInfoFlags;
    v9 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(16 * m_PkgPnp[1].m_NPLock.m_DbgFlagIsInitialized)) & 0x10;
    DriverInfo->Dword = v9;
    if ( m_DeviceObject )
      v10 = (__int64)m_DeviceObject[1].CurrentIrp & 1;
    else
      v10 = 0;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v12 = v9 & 0xFFFFFF9F | (32 * (v10 & 1));
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((m_Owner != 0LL) << 7)) & 0x80;
    DriverInfo->Dword = v13;
    if ( m_Owner )
      WakeFromS0Capable = m_Owner->m_IdleSettings.WakeFromS0Capable;
    else
      WakeFromS0Capable = 0;
    v15 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(WakeFromS0Capable << 8)) & 0x100;
    DriverInfo->Dword = v15;
    if ( !m_Owner || !m_Owner->m_IdleSettings.WakeFromS0Capable || (v16 = 1, !m_Owner->m_IdleSettings.UsbSSCapable) )
      v16 = 0;
    DriverInfo->Dword = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(v16 << 9)) & 0x200;
    if ( m_Owner )
      v17 = (m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0;
    else
      v17 = 0;
    DriverInfo->Dword ^= (DriverInfo->Dword ^ (v17 << 10)) & 0x400;
    v18 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    if ( v18 )
      Enabled = v18->m_WakeSettings.Enabled;
    v19 = DriverInfo->Dword ^ ((unsigned __int16)DriverInfo->Dword ^ (unsigned __int16)(Enabled << 11)) & 0x800;
    v20 = v19 ^ ((unsigned __int16)v19 ^ ((m_DeviceTelemetryInfoFlags & 1) << 12)) & 0x1000;
    v21 = v20 ^ ((unsigned __int16)v20 ^ (((m_DeviceTelemetryInfoFlags & 2) != 0) << 13)) & 0x2000;
    v22 = v21 ^ ((unsigned __int16)v21 ^ (((m_DeviceTelemetryInfoFlags & 4) != 0) << 14)) & 0x4000;
    v23 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(((m_DeviceTelemetryInfoFlags & 8) != 0) << 15)) & 0x8000;
    v24 = v23 ^ (v23 ^ ((m_PkgPnp->m_InterruptObjectCount > 1) << 16)) & 0x10000;
    v25 = v24 ^ (v24 ^ (((m_DeviceTelemetryInfoFlags & 0x10) != 0) << 17)) & 0x20000;
    v26 = v25 ^ (v25 ^ (((m_DeviceTelemetryInfoFlags & 0x20) != 0) << 18)) & 0x40000;
    v27 = v26 ^ (v26 ^ (((m_DeviceTelemetryInfoFlags & 0x40) != 0) << 19)) & 0x80000;
    v28 = v27 ^ (v27 ^ ((unsigned __int8)m_DeviceTelemetryInfoFlags >> 7 << 20)) & 0x100000;
    v29 = v28 ^ (v28 ^ ((HIBYTE(m_DeviceTelemetryInfoFlags) & 1) << 21)) & 0x200000;
    v5 = v29 ^ (v29 ^ (((m_DeviceTelemetryInfoFlags & 0x200) != 0) << 22)) & 0x400000;
  }
  else
  {
    v5 = v4 ^ (Globals->Public.DriverFlags & 1 ^ v4) & 1 ^ ((unsigned __int8)(v4 ^ (Globals->Public.DriverFlags & 1 ^ v4) & 1) ^ (unsigned __int8)(2 * ((Globals->Public.DriverFlags & 2) != 0))) & 2;
  }
  DriverInfo->Dword = v5;
}
