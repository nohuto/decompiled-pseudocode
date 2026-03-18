/*
 * XREFs of ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0035DA0
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C001322C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002C520 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x1C006A944 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerUp(FxDmaEnabler *this, unsigned __int8 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v5; // rbp
  int level; // edi
  WDFDMAENABLER__ *_a1; // r14
  int globals; // esi
  int (__fastcall *v10)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v11)(WDFDMAENABLER__ *); // rax
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax

  m_Globals = this->m_Globals;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  level = 0;
  _a1 = (WDFDMAENABLER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  globals = 0;
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x18u, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  if ( this->m_EvtDmaEnablerFill.m_Method
    && ((v10 = this->m_EvtDmaEnablerFill.m_Method) == 0LL
      ? (this->m_EvtDmaEnablerFill.m_Status = 0)
      : (this->m_EvtDmaEnablerFill.m_Status = v10(_a1)),
        level = this->m_EvtDmaEnablerFill.m_Status,
        level < 0) )
  {
    globals = 1;
    this->m_DmaEnablerFillFailed = 1;
  }
  else if ( this->m_EvtDmaEnablerEnable.m_Method
         && ((v11 = this->m_EvtDmaEnablerEnable.m_Method) == 0LL
           ? (this->m_EvtDmaEnablerEnable.m_Status = 0)
           : (this->m_EvtDmaEnablerEnable.m_Status = v11(_a1)),
             level = this->m_EvtDmaEnablerEnable.m_Status,
             level < 0) )
  {
    this->m_DmaEnablerEnableFailed = 1;
    globals = 3;
  }
  else if ( this->m_EvtDmaEnablerSelfManagedIoStart.m_Method )
  {
    m_Method = this->m_EvtDmaEnablerSelfManagedIoStart.m_Method;
    if ( m_Method )
      this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = m_Method(_a1);
    else
      this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = 0;
    level = this->m_EvtDmaEnablerSelfManagedIoStart.m_Status;
    if ( level >= 0 )
      return (unsigned int)level;
    this->m_DmaEnablerSelfManagedIoStartFailed = 1;
    globals = 5;
  }
  if ( level < 0 )
  {
    if ( !this->m_ObjectSize )
      v5 = 0LL;
    WPP_IFR_SF_qld(m_Globals, a2, a3, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, v5, globals, level);
  }
  return (unsigned int)level;
}
