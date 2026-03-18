/*
 * XREFs of ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C008DE30
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0057398 (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxUsbIdleInfo::_UsbIdleCallback(FxPkgPnp *Context, unsigned __int8 a2)
{
  unsigned __int8 v3; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxUsbIdleInfo *m_UsbIdle; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&event, a2);
  m_Globals = Context->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xBu, WPP_PowerPolicyStateMachineKM_cpp_Traceguids);
  m_UsbIdle = Context->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  m_UsbIdle->m_IdleCallbackEvent = &event;
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolUsbSelectiveSuspendCallback, v3);
  FxCREvent::EnterCRAndWaitAndLeave(&event);
  m_UsbIdle->m_IdleCallbackEvent = 0LL;
  v6 = Context->m_Globals;
  if ( v6->FxVerboseOn )
    WPP_IFR_SF_(v6, 5u, 0xCu, 0xCu, WPP_PowerPolicyStateMachineKM_cpp_Traceguids);
}
