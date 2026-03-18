/*
 * XREFs of ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00628AC
 * Callers:
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0094F60 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C009515C (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerGotoDxStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095320 (-PowerGotoDxStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPowerFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095780 (-PowerPowerFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0062910 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerDownEvents(FxPkgPnp *this, FxPowerDownType Type)
{
  FxPowerPolicyEvent v3; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  if ( Type == FxPowerDownTypeImplicit )
  {
    FxPkgPnp::PowerSendIdlePowerEvent(this, PowerIdleEventPowerDown);
    v3 = this->m_PowerPolicyMachine.m_Owner != 0LL ? PwrPolPowerDown : PwrPolImplicitPowerDown;
  }
  else
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      return;
    }
    v3 = PwrPolPowerDown;
  }
  FxPkgPnp::PowerPolicyProcessEvent(this, v3, 0);
}
