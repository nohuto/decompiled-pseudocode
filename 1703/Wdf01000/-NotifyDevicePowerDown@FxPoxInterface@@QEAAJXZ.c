/*
 * XREFs of ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C002DEE8
 * Callers:
 *     ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012AD0 (-PowerPolSleeping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0015100 (-PowerPolTimerExpiredNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredDecideUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003BF60 (-PowerPolTimerExpiredDecideUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0032494 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

__int64 __fastcall FxPoxInterface::NotifyDevicePowerDown(FxPoxInterface *this)
{
  char v1; // bl
  KIRQL v4; // bp

  v1 = 0;
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  if ( !this->m_DevicePowerRequired )
  {
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventDeviceGoingToDx);
    v1 = 1;
  }
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  return v1 == 0 ? 0xC0000001 : 0;
}
