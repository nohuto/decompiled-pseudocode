/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1C00137D8
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001000 (imp_WdfTimerStop.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000CFC4 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C001377C (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0024720 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0025930 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00637A0 (-Stop@FxTimer@@QEAAEE@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  if ( this->m_Timer.m_IsExtTimer )
    return ExCancelTimer(this->m_Timer.m_KernelExTimer, 0LL);
  else
    return KeCancelTimer(&this->m_Timer.KernelTimer);
}
