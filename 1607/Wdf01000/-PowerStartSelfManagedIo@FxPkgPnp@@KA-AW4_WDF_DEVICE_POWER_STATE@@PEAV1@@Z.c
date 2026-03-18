/*
 * XREFs of ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0013450
 * Callers:
 *     <none>
 * Callees:
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001C900 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0023880 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C002566C (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002DBBC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v4; // bl
  __int64 v5; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
  {
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 813 : 865;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, WdfPowerDeviceD0);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
    FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerUpComplete);
    KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v4);
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolPowerUp, 0);
  LOBYTE(v5) = 1;
  This->PowerReleasePendingDeviceIrp(This, v5);
  return This->m_SharedPower.m_WaitWakeOwner != 0 ? 777 : 775;
}
