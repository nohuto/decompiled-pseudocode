/*
 * XREFs of ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001D790
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C0012394 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0012AA0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001DA90 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 v4; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v6; // bl

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && (int)FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)1) < 0 )
  {
    return 835LL;
  }
  m_DeviceBase = This->m_DeviceBase;
  This->m_DevicePowerStateOld = This->m_DevicePowerState;
  This->m_DevicePowerState = 1;
  This->m_SystemPowerAction = 0;
  PoSetPowerState(m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, (POWER_STATE)1);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
    FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerUpComplete);
    KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v6);
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolPowerUp, v4);
  return 787LL;
}
