/*
 * XREFs of ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001C900 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0023880 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002DBBC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v5; // bl
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
  {
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 835 : 864;
  }
  m_DeviceBase = This->m_DeviceBase;
  This->m_DevicePowerStateOld = This->m_DevicePowerState;
  This->m_DevicePowerState = 1;
  This->m_SystemPowerAction = 0;
  PoSetPowerState(m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, (POWER_STATE)1);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
    FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerUpComplete);
    KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v5);
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolPowerUp, 0);
  return 787LL;
}
