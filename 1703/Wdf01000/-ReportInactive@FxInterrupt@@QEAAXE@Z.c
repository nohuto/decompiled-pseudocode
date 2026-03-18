/*
 * XREFs of ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C00A0280
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C0014660 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportInactive @ 0x1C0095D90 (imp_WdfInterruptReportInactive.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::ReportInactive(FxInterrupt *this, unsigned __int8 Internal)
{
  __int64 v3; // r8
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdi
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !Internal )
  {
    if ( !this->m_Connected || !this->m_Interrupt )
    {
      m_ObjectSize = this->m_ObjectSize;
      p_m_Globals = &this->m_Globals;
      m_Globals = this->m_Globals;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 3u, 0xCu, 0xCu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
      v4 = *p_m_Globals;
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(v3 + 1144) )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xDu, WPP_InterruptObjectKm_cpp_Traceguids);
      v4 = this->m_Globals;
LABEL_9:
      FxVerifierDbgBreakPoint(v4);
      return;
    }
  }
  if ( this->m_Active )
  {
    *(_QWORD *)&parameters.Version = 0LL;
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    *(_QWORD *)&parameters.Version = FxLibraryGlobals.ProcessorGroupSupport != 0 ? 4 : 1;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v3 + 1144))(&parameters);
    this->m_Active = 0;
  }
}
