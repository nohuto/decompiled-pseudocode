/*
 * XREFs of GetDriverInfo @ 0x1C0084EDC
 * Callers:
 *     LogDriverInfoStream @ 0x1C0085178 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDriverInfo(_FX_DRIVER_GLOBALS *Globals, FxDevice *Fdo, FxTelemetryDriverInfo *DriverInfo)
{
  unsigned int v4; // r10d
  int v5; // r8d
  FxPkgPnp *m_PkgPnp; // rbx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int16 m_DeviceTelemetryInfoFlags; // di
  unsigned int v9; // eax
  int v10; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // r9
  unsigned int v12; // edx
  unsigned __int8 Enabled; // al
  unsigned int v14; // ecx
  unsigned __int8 WakeFromS0Capable; // al
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // r9d
  unsigned int v20; // r9d
  FxPowerPolicyOwnerSettings *v21; // rax
  unsigned __int8 v22; // cl

  v4 = DriverInfo->Dword & 0xFFFFFFF3 | (4 * (Globals->FxVerifierOn & 1)) | ((unsigned __int16)Globals->FxEnhancedVerifierOptions != 0
                                                                           ? 8
                                                                           : 0);
  DriverInfo->Dword = v4;
  v5 = 0;
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
    v12 = (m_Owner != 0LL ? 0x80 : 0) | v9 & 0xFFFFFF1F | (32 * v10) & 0xFFFFFF3F;
    DriverInfo->Dword = v12;
    if ( m_Owner )
      Enabled = m_Owner->m_IdleSettings.Enabled;
    else
      Enabled = 0;
    v14 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(Enabled << 8)) & 0x100;
    DriverInfo->Dword = v14;
    if ( m_Owner )
      WakeFromS0Capable = m_Owner->m_IdleSettings.WakeFromS0Capable;
    else
      WakeFromS0Capable = 0;
    v16 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(WakeFromS0Capable << 9)) & 0x200;
    DriverInfo->Dword = v16;
    if ( !m_Owner || !m_Owner->m_IdleSettings.WakeFromS0Capable || (v17 = 1024, !m_Owner->m_IdleSettings.UsbSSCapable) )
      v17 = 0;
    v18 = v17 | v16 & 0xFFFFFBFF;
    DriverInfo->Dword = v18;
    if ( m_Owner )
      v19 = ((unsigned int)m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus >> 1) & 1;
    else
      v19 = 0;
    v20 = v18 & 0xFFFFF7FF | (v19 << 11);
    v21 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    DriverInfo->Dword = v20;
    if ( v21 )
      v22 = v21->m_WakeSettings.Enabled;
    else
      v22 = 0;
    LOBYTE(v5) = m_PkgPnp->m_InterruptObjectCount > 1;
    DriverInfo->Dword = v20 & 0xFF000FFF | (((m_DeviceTelemetryInfoFlags >> 7) & 1 | (2
                                                                                    * (HIBYTE(m_DeviceTelemetryInfoFlags) & 1))) << 21) & 0xFF7FFFFF | ((v22 & 1 | (2 * (m_DeviceTelemetryInfoFlags & 1 | (2 * ((m_DeviceTelemetryInfoFlags >> 1) & 1 | (2 * ((m_DeviceTelemetryInfoFlags >> 2) & 1 | (2 * ((m_DeviceTelemetryInfoFlags >> 3) & 1 | (2 * (v5 & 0xFFFFFF81 | (2 * ((m_DeviceTelemetryInfoFlags >> 4) & 1 | (2 * ((m_DeviceTelemetryInfoFlags >> 5) & 1 | (2 * ((m_DeviceTelemetryInfoFlags >> 6) & 1 | (8 * ((m_DeviceTelemetryInfoFlags >> 9) & 1))))))))))))))))))) << 12);
  }
  else
  {
    DriverInfo->Dword = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)Globals->Public.DriverFlags) & 3;
  }
}
