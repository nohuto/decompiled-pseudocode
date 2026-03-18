/*
 * XREFs of ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C001353C
 * Callers:
 *     ?PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000F480 (-PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000FE50 (-PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolS0NoWakePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000FFB0 (-PowerPolS0NoWakePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010120 (-PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C001340C (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C0055074 (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B8C0 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B9B0 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0069670 (WPP_IFR_SF_dqqd.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicySendDevicePowerRequest(
        FxPkgPnp *this,
        POWER_STATE DeviceState,
        SendDeviceRequestAction Action)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  void (__fastcall *v7)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, FxPkgPnp *); // r14
  int v8; // ebp
  NTSTATUS globals; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPowerPolicyOwnerSettings *v12; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a4; // rax
  _LARGE_INTEGER interval; // [rsp+80h] [rbp+8h] BYREF

  interval.QuadPart = -5000000LL;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( DeviceState.SystemState == PowerSystemWorking )
  {
    v7 = FxPkgPnp::_PowerPolDevicePowerUpComplete;
    m_Owner->m_RequestedPowerUpIrp = 1;
  }
  else
  {
    v7 = (void (__fastcall *)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, FxPkgPnp *))FxPkgPnp::_PowerPolDevicePowerDownComplete;
    m_Owner->m_RequestedPowerDownIrp = 1;
  }
  v8 = 0;
  while ( 1 )
  {
    globals = PoRequestPowerIrp(
                this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
                2u,
                DeviceState,
                (PREQUEST_POWER_COMPLETE)v7,
                this,
                0LL);
    if ( globals >= 0 )
      break;
    if ( Action )
    {
      KeDelayExecutionThread(0, 0, &interval);
      if ( (unsigned int)++v8 < 0x64 )
        continue;
    }
    v12 = this->m_PowerPolicyMachine.m_Owner;
    if ( DeviceState.SystemState == PowerSystemWorking )
      v12->m_RequestedPowerUpIrp = 0;
    else
      v12->m_RequestedPowerDownIrp = 0;
    if ( Action == Retry )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase->m_ObjectSize )
        _a4 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a4 = 0LL;
      WPP_IFR_SF_dqqd(
        this->m_Globals,
        (unsigned __int8)m_DeviceBase,
        0xCu,
        0x22u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        DeviceState.SystemState - 1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a4,
        globals);
    }
    break;
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_dd(
      m_Globals,
      5u,
      0xCu,
      0x23u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      DeviceState.SystemState - 1,
      globals);
  return (unsigned int)globals;
}
