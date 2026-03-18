/*
 * XREFs of ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C006565C
 * Callers:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C0023AC4 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E430 (-PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0032B70 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C00656C4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildrenCanPowerUp(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxEnumerationInfo *v4; // rcx

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    if ( this->m_PowerPolicyMachine.m_Owner )
    {
      FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, a2, 0LL);
      this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
      v4 = this->m_EnumInfo;
      v4->m_PowerStateLock.m_OwningThread = 0LL;
      KeSetEvent(&v4->m_PowerStateLock.m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
      FxPkgPnp::PowerPolicyPostParentToD0ToChildren(this);
    }
  }
}
