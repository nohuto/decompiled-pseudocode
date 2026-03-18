/*
 * XREFs of ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0062698
 * Callers:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C0023FBC (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099B60 (-PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CA28 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002CA48 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C00626E8 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildrenCanPowerUp(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  _FX_DRIVER_GLOBALS *v4; // rdx

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    if ( this->m_PowerPolicyMachine.m_Owner )
    {
      FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, a2, 0LL);
      this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
      FxWaitLockInternal::ReleaseLock(&this->m_EnumInfo->m_PowerStateLock, v4);
      FxPkgPnp::PowerPolicyPostParentToD0ToChildren(this);
    }
  }
}
