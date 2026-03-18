/*
 * XREFs of ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C00328C8
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005E40 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0013600 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0014E10 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?StartTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00328A0 (-StartTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x1C0054DDC (-StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z.c)
 */

void __fastcall MxTimer::Start(MxTimer *this, _LARGE_INTEGER DueTime, unsigned int TolerableDelay)
{
  if ( this->m_Timer.m_IsExtTimer )
    MxTimer::StartWithReturn(this, DueTime, TolerableDelay);
  else
    KeSetCoalescableTimer(
      &this->m_Timer.KernelTimer,
      DueTime,
      this->m_Timer.m_Period,
      TolerableDelay,
      &this->m_Timer.TimerDpc);
}
