/*
 * XREFs of ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C00A3B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0019D10 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
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
