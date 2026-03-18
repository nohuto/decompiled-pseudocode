/*
 * XREFs of ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C001340C
 * Callers:
 *     ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000FD50 (-PowerPolTimerExpiredNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0034230 (-PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C001353C (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0054FB4 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCanIdlePowerDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *DxState)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  _DEVICE_POWER_STATE v4; // esi
  _FX_DRIVER_GLOBALS *v5; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int _a3; // ecx
  char v8; // bl
  FxDeviceBase *m_DeviceBase; // rax
  __int64 _a2; // rdx
  const void *_a1; // rax

  m_EnumInfo = this->m_EnumInfo;
  v4 = (int)DxState;
  if ( m_EnumInfo )
  {
    FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, DxState, 0LL);
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    _a3 = m_Owner->m_ChildrenPoweredOnCount;
    if ( _a3 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qid(this->m_Globals, 4u, 0xCu, 0x2Fu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2, _a3);
      v8 = 0;
    }
    else
    {
      m_Owner->m_ChildrenCanPowerUp = 0;
      v8 = 1;
    }
    FxWaitLockInternal::ReleaseLock(&this->m_EnumInfo->m_PowerStateLock, v5);
  }
  else
  {
    v8 = 1;
  }
  if ( v8 && FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v4, NoRetry) < 0 )
  {
    FxPkgPnp::PowerPolicyChildrenCanPowerUp(this);
    return 0;
  }
  return v8;
}
