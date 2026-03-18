/*
 * XREFs of ?InDxIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0010C20
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxPowerIdleMachine::InDxIoIncrement(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp *Next; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax

  Next = (FxPkgPnp *)This[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  if ( (This->m_Flags & 0x40) != 0 )
  {
    m_DeviceBase = Next->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(Next->m_Globals, 4u, 0xCu, 0xBu, WPP_PowerIdleStateMachine_cpp_Traceguids, _a1);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(Next, PwrPolIoPresent, a3);
    This->m_Flags |= 0x40u;
  }
  return 17LL;
}
