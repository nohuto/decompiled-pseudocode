/*
 * XREFs of ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0019904
 * Callers:
 *     ?PowerGotoDxArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0030490 (-PowerGotoDxArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000B100 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C002903C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerGotoDx(FxPkgPnp *this, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  unsigned __int8 v6; // r8
  int _a1; // eax

  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x15u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      this->m_PowerMachine.m_IoCallbackFailure = 1;
    }
  }
  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 1, a3, a4);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDownIoStopped, v6);
}
