/*
 * XREFs of ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C0023AC4
 * Callers:
 *     ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0015100 (-PowerPolTimerExpiredNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003C240 (-PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 * Callees:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C0023C14 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0032B70 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C006565C (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCanIdlePowerDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *DxState)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  _DEVICE_POWER_STATE v4; // esi
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int _a3; // r8d
  char v7; // bl
  FxEnumerationInfo *v8; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 _a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx

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
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qid(this->m_Globals, 4u, 0xCu, 0x2Fu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2, _a3);
      v7 = 0;
    }
    else
    {
      m_Owner->m_ChildrenCanPowerUp = 0;
      v7 = 1;
    }
    v8 = this->m_EnumInfo;
    v8->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v8->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    v7 = 1;
  }
  if ( v7 && FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v4, NoRetry) < 0 )
  {
    FxPkgPnp::PowerPolicyChildrenCanPowerUp(this);
    return 0;
  }
  return v7;
}
