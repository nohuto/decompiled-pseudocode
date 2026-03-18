/*
 * XREFs of ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C009B7FC
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C0013924 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportInactive @ 0x1C0091C20 (imp_WdfInterruptReportInactive.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::ReportInactive(FxInterrupt *this, unsigned __int8 Internal)
{
  const void *_a1; // rbx
  __int64 v4; // r8
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  _a1 = 0LL;
  v4 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !Internal )
  {
    if ( !this->m_Connected || !this->m_Interrupt )
    {
      if ( this->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0xCu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(v4 + 1144) )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xDu, WPP_InterruptObjectKm_cpp_Traceguids);
LABEL_9:
      FxVerifierDbgBreakPoint(this->m_Globals);
      return;
    }
  }
  if ( this->m_Active )
  {
    *(_QWORD *)&parameters.Version = 0LL;
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    *(_QWORD *)&parameters.Version = FxLibraryGlobals.ProcessorGroupSupport != 0 ? 4 : 1;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v4 + 1144))(&parameters);
    this->m_Active = 0;
  }
}
