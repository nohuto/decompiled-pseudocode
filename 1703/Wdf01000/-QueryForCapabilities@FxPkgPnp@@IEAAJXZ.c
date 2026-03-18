/*
 * XREFs of ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C00259D0
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0027F14 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002808C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002C390 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C002AFC0 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

int __fastcall FxPkgPnp::QueryForCapabilities(FxPkgPnp *this)
{
  int result; // eax
  int v3; // esi
  unsigned int v4; // edi
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // ecx
  unsigned int v7; // edx
  _WDF_BIND_INFO *v8; // rcx
  unsigned int v9; // eax
  unsigned __int8 DeviceWake; // r8
  __int64 v11; // rax
  MxDeviceObject deviceObject; // [rsp+20h] [rbp-88h] BYREF
  _STACK_DEVICE_CAPABILITIES caps; // [rsp+30h] [rbp-78h] BYREF

  deviceObject.m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  result = GetStackCapabilities(this->m_Globals, &deviceObject, &this->m_D3ColdInterface, &caps);
  v3 = result;
  if ( result >= 0 )
  {
    this->m_SystemWake = caps.DeviceCaps.SystemWake;
    v4 = 1;
    WdfBindInfo = this->m_Globals->WdfBindInfo;
    Major = WdfBindInfo->Version.Major;
    if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
    {
      v7 = 1;
      *(_DWORD *)this->m_DeviceWake = 0;
      this->m_DeviceWake[4] = 0;
      if ( this->m_SystemWake )
      {
        DeviceWake = caps.DeviceCaps.DeviceWake;
        do
        {
          v11 = v7++ - 1;
          this->m_DeviceWake[v11] = DeviceWake;
        }
        while ( v7 <= this->m_SystemWake );
      }
    }
    else
    {
      memset(this->m_DeviceWake, LOBYTE(caps.DeviceCaps.DeviceWake), sizeof(this->m_DeviceWake));
    }
    this->m_PowerPolicyMachine.m_Owner->m_SystemToDeviceStateMap = caps.DeviceCaps.DeviceState[0] & 0xF | (16 * (caps.DeviceCaps.DeviceState[1] & 0xF | (16 * (caps.DeviceCaps.DeviceState[2] & 0xF | (16 * (caps.DeviceCaps.DeviceState[3] & 0xF | (16 * (caps.DeviceCaps.DeviceState[4] & 0xF | (16 * (caps.DeviceCaps.DeviceState[5] & 0xF | (16 * (caps.DeviceCaps.DeviceState[6] & 0xF))))))))))));
    v8 = this->m_Globals->WdfBindInfo;
    v9 = v8->Version.Major;
    if ( (v9 > 1 || v9 == 1 && v8->Version.Minor >= 0xB) && this->m_SystemWake )
    {
      do
      {
        if ( caps.DeepestWakeableDstate[v4] != DeviceWakeDepthMaximum )
          this->m_DeviceWake[v4 - 1] = caps.DeepestWakeableDstate[v4];
        ++v4;
      }
      while ( v4 <= this->m_SystemWake );
    }
    return v3;
  }
  return result;
}
