/*
 * XREFs of ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0006AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C000AF00 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0017010 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0019694 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0019D10 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C002903C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  unsigned __int8 v3; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v5; // bl
  __int64 v6; // rdx
  int _a1; // eax

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && (_a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart), _a1 < 0) )
  {
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x1Au, WPP_PowerStateMachine_cpp_Traceguids, _a1);
    return 813LL;
  }
  else
  {
    FxPkgPnp::PowerSetDevicePowerState(This, WdfPowerDeviceD0);
    m_Owner = This->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
      FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerUpComplete);
      KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v5);
    }
    FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolPowerUp, v3);
    LOBYTE(v6) = 1;
    This->PowerReleasePendingDeviceIrp(This, v6);
    return This->m_SharedPower.m_WaitWakeOwner != 0 ? 777 : 775;
  }
}
