/*
 * XREFs of ?SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z @ 0x1C001AE10
 * Callers:
 *     imp_WdfDeviceSetPowerCapabilities @ 0x1C002B220 (imp_WdfDeviceSetPowerCapabilities.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SetPowerCaps(FxPkgPnp *this, _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  __int16 v2; // r9
  _DEVICE_POWER_STATE *DeviceState; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  __int16 v7; // r11
  int v8; // eax
  int v9; // r8d
  _WDF_TRI_STATE DeviceD1; // ecx
  _WDF_TRI_STATE DeviceD2; // r8d
  _WDF_TRI_STATE WakeFromD0; // r8d
  __int16 v13; // cx
  __int16 v14; // ax
  _WDF_TRI_STATE WakeFromD1; // r8d
  __int16 v16; // cx
  __int16 v17; // ax
  _WDF_TRI_STATE WakeFromD2; // r8d
  __int16 v19; // cx
  __int16 v20; // ax
  _WDF_TRI_STATE WakeFromD3; // r8d
  __int16 v22; // cx

  v2 = 0;
  DeviceState = PowerCapabilities->DeviceState;
  v5 = 0;
  v6 = 0;
  v7 = 4;
  do
  {
    v8 = (*DeviceState & 0xF) << v6;
    v9 = ~(15 << v6);
    v6 += 4;
    v5 = v8 | v9 & v5;
    ++DeviceState;
  }
  while ( v6 < 0x1C );
  this->m_PowerCaps.States = v5;
  DeviceD1 = PowerCapabilities->DeviceD1;
  if ( DeviceD1 )
  {
    if ( DeviceD1 != WdfTrue )
      LOWORD(DeviceD1) = 2;
  }
  else
  {
    LOWORD(DeviceD1) = 0;
  }
  DeviceD2 = PowerCapabilities->DeviceD2;
  if ( DeviceD2 )
  {
    if ( DeviceD2 != WdfTrue )
      v7 = 8;
  }
  else
  {
    v7 = 0;
  }
  WakeFromD0 = PowerCapabilities->WakeFromD0;
  v13 = v7 | DeviceD1;
  if ( WakeFromD0 )
  {
    if ( WakeFromD0 == WdfTrue )
      v14 = 16;
    else
      v14 = 32;
  }
  else
  {
    v14 = 0;
  }
  WakeFromD1 = PowerCapabilities->WakeFromD1;
  v16 = v14 | v13;
  if ( WakeFromD1 )
  {
    if ( WakeFromD1 == WdfTrue )
      v17 = 64;
    else
      v17 = 128;
  }
  else
  {
    v17 = 0;
  }
  WakeFromD2 = PowerCapabilities->WakeFromD2;
  v19 = v17 | v16;
  if ( WakeFromD2 )
  {
    if ( WakeFromD2 == WdfTrue )
      v20 = 256;
    else
      v20 = 512;
  }
  else
  {
    v20 = 0;
  }
  WakeFromD3 = PowerCapabilities->WakeFromD3;
  v22 = v20 | v19;
  if ( WakeFromD3 )
  {
    v2 = 2048;
    if ( WakeFromD3 == WdfTrue )
      v2 = 1024;
  }
  this->m_PowerCaps.Caps = v22 | v2;
  if ( PowerCapabilities->DeviceWake != PowerDeviceMaximum )
    this->m_PowerCaps.DeviceWake = PowerCapabilities->DeviceWake;
  if ( PowerCapabilities->SystemWake != PowerSystemMaximum )
    this->m_PowerCaps.SystemWake = PowerCapabilities->SystemWake;
  this->m_PowerCaps.D1Latency = PowerCapabilities->D1Latency;
  this->m_PowerCaps.D2Latency = PowerCapabilities->D2Latency;
  this->m_PowerCaps.D3Latency = PowerCapabilities->D3Latency;
  if ( PowerCapabilities->IdealDxStateForSx != PowerDeviceMaximum )
    this->m_PowerPolicyMachine.m_Owner->m_IdealDxStateForSx = PowerCapabilities->IdealDxStateForSx;
}
