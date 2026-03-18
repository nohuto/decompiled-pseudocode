/*
 * XREFs of ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C510
 * Callers:
 *     <none>
 * Callees:
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C000AF00 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0019694 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C002903C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C005BC9C (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoNP(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  __int64 v5; // rdx

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && (_a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)1), _a1 < 0) )
  {
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x1Bu, WPP_PowerStateMachine_cpp_Traceguids, _a1);
    return 33582LL;
  }
  else
  {
    FxPkgPnp::PowerSetDevicePowerState(This, 1);
    FxPkgPnp::PowerSendPowerUpEvents(This);
    LOBYTE(v5) = 1;
    This->PowerReleasePendingDeviceIrp(This, v5);
    return This->m_SharedPower.m_WaitWakeOwner != 0 ? 33546 : 33544;
  }
}
