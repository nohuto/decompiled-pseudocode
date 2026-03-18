/*
 * XREFs of ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000CFC4
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000CB30 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C002ADC8 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0063AE4 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00137D8 (-Stop@MxTimer@@QEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 */

unsigned __int8 __fastcall FxRequestBase::CancelTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  if ( (this->m_TargetFlags & 4) == 0 )
    return 1;
  if ( MxTimer::Stop(&this->m_Timer->Timer) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x15u, WPP_FxRequestBase_cpp_Traceguids, this);
    this->m_TargetFlags &= ~4u;
    return 1;
  }
  v3 = this->m_Globals;
  if ( v3->FxVerboseOn )
    WPP_IFR_SF_q(v3, 5u, 0xDu, 0x14u, WPP_FxRequestBase_cpp_Traceguids, this);
  return 0;
}
