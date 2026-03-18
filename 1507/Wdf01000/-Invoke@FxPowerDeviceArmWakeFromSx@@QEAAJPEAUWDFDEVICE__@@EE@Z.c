/*
 * XREFs of ?Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EE@Z @ 0x1C00A0170
 * Callers:
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A08E0 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A09E0 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

int (__fastcall *__fastcall FxPowerDeviceArmWakeFromSx::Invoke(
        FxPowerDeviceArmWakeFromSx *this,
        WDFDEVICE__ *Device,
        __int64 DeviceWakeEnabled,
        unsigned __int8 ChildrenArmedForWake))(WDFDEVICE__ *)
{
  int (__fastcall *m_MethodWithReason)(WDFDEVICE__ *, unsigned __int8, unsigned __int8); // rax
  char v5; // r11
  WDFDEVICE__ *v6; // r10
  int (__fastcall *result)(WDFDEVICE__ *); // rax

  m_MethodWithReason = this->m_MethodWithReason;
  v5 = DeviceWakeEnabled;
  v6 = Device;
  if ( m_MethodWithReason )
  {
    LOBYTE(DeviceWakeEnabled) = ChildrenArmedForWake;
    LOBYTE(Device) = v5;
    return (int (__fastcall *)(WDFDEVICE__ *))((__int64 (__fastcall *)(WDFDEVICE__ *, WDFDEVICE__ *, __int64))m_MethodWithReason)(
                                                v6,
                                                Device,
                                                DeviceWakeEnabled);
  }
  else
  {
    result = this->m_Method;
    if ( this->m_Method )
      return (int (__fastcall *)(WDFDEVICE__ *))((__int64 (__fastcall *)(WDFDEVICE__ *))result)(Device);
  }
  return result;
}
