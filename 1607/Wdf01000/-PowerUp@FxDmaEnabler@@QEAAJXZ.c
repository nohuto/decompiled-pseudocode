/*
 * XREFs of ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C002FB68
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0012F94 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0034100 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x1C0067108 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerUp(FxDmaEnabler *this, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int level; // edi
  unsigned __int64 v7; // rbp
  int globals; // esi
  const void *_a1; // rax
  int (__fastcall *v11)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v12)(WDFDMAENABLER__ *); // rax
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  const void *v14; // rbx

  m_ObjectSize = this->m_ObjectSize;
  m_Globals = this->m_Globals;
  level = 0;
  if ( m_ObjectSize )
    v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v7 = 0LL;
  globals = 0;
  if ( m_Globals->FxVerboseOn )
  {
    if ( m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x18u, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  }
  if ( this->m_EvtDmaEnablerFill.m_Method
    && ((v11 = this->m_EvtDmaEnablerFill.m_Method) == 0LL
      ? (this->m_EvtDmaEnablerFill.m_Status = 0)
      : (this->m_EvtDmaEnablerFill.m_Status = v11((WDFDMAENABLER__ *)v7)),
        level = this->m_EvtDmaEnablerFill.m_Status,
        level < 0) )
  {
    globals = 1;
    this->m_DmaEnablerFillFailed = 1;
  }
  else if ( this->m_EvtDmaEnablerEnable.m_Method
         && ((v12 = this->m_EvtDmaEnablerEnable.m_Method) == 0LL
           ? (this->m_EvtDmaEnablerEnable.m_Status = 0)
           : (this->m_EvtDmaEnablerEnable.m_Status = v12((WDFDMAENABLER__ *)v7)),
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
      this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = m_Method((WDFDMAENABLER__ *)v7);
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
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qld(m_Globals, a2, a3, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, v14, globals, level);
  }
  return (unsigned int)level;
}
