/*
 * XREFs of ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0013D84
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013B60 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0014698 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C005C814 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 */

unsigned __int8 __fastcall FxRequestBase::CancelTimer(FxRequestBase *this)
{
  FxRequestTimer *m_Timer; // rcx
  BOOLEAN v4; // al
  _FX_DRIVER_GLOBALS *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  if ( (this->m_TargetFlags & 4) == 0 )
    return 1;
  m_Timer = this->m_Timer;
  if ( m_Timer->Timer.m_Timer.m_IsExtTimer )
    v4 = ExCancelTimer(m_Timer->Timer.m_Timer.m_KernelExTimer, 0LL);
  else
    v4 = KeCancelTimer(&m_Timer->Timer.m_Timer.KernelTimer);
  if ( v4 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x15u, WPP_FxRequestBase_cpp_Traceguids, this);
    this->m_TargetFlags &= ~4u;
    return 1;
  }
  v5 = this->m_Globals;
  if ( v5->FxVerboseOn )
    WPP_IFR_SF_q(v5, 5u, 0xDu, 0x14u, WPP_FxRequestBase_cpp_Traceguids, this);
  return 0;
}
