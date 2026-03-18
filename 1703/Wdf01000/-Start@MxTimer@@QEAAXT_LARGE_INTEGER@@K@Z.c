/*
 * XREFs of ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C001938C
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00100B0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?StartTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0018B00 (-StartTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0023CE0 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0024F80 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
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
