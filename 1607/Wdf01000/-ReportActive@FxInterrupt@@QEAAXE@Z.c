/*
 * XREFs of ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C009B71C
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0015608 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportActive @ 0x1C0091BE0 (imp_WdfInterruptReportActive.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::ReportActive(FxInterrupt *this, unsigned __int8 Internal)
{
  __int64 v3; // r8
  const void *_a1; // rax
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  _a1 = 0LL;
  if ( !Internal )
  {
    if ( !this->m_Connected || !this->m_Interrupt )
    {
      if ( this->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0xAu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(v3 + 1136) )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xBu, WPP_InterruptObjectKm_cpp_Traceguids);
LABEL_9:
      FxVerifierDbgBreakPoint(this->m_Globals);
      return;
    }
  }
  if ( !this->m_Active )
  {
    *(_QWORD *)&parameters.Version = 0LL;
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    *(_QWORD *)&parameters.Version = FxLibraryGlobals.ProcessorGroupSupport != 0 ? 4 : 1;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v3 + 1136))(&parameters);
    this->m_Active = 1;
  }
}
