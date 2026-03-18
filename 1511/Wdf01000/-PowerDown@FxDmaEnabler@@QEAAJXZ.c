/*
 * XREFs of ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x1C000FBBC
 * Callers:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0014AD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x1C005D158 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerDown(FxDmaEnabler *this, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int level; // edi
  unsigned __int64 v7; // rsi
  int globals; // ebp
  const void *_a1; // rax
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v12)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v13)(WDFDMAENABLER__ *); // rax
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
  if ( this->m_EvtDmaEnablerSelfManagedIoStop.m_Method )
  {
    m_Method = this->m_EvtDmaEnablerSelfManagedIoStop.m_Method;
    this->m_EvtDmaEnablerSelfManagedIoStop.m_Status = m_Method ? m_Method((WDFDMAENABLER__ *)v7) : 0;
    if ( this->m_EvtDmaEnablerSelfManagedIoStop.m_Status < 0 )
    {
      globals = 6;
      level = this->m_EvtDmaEnablerSelfManagedIoStop.m_Status;
    }
  }
  if ( this->m_EvtDmaEnablerDisable.m_Method && !this->m_DmaEnablerFillFailed )
  {
    v12 = this->m_EvtDmaEnablerDisable.m_Method;
    this->m_EvtDmaEnablerDisable.m_Status = v12 ? v12((WDFDMAENABLER__ *)v7) : 0;
    if ( this->m_EvtDmaEnablerDisable.m_Status < 0 )
    {
      globals = 4;
      if ( level >= 0 )
        level = this->m_EvtDmaEnablerDisable.m_Status;
    }
  }
  if ( !this->m_EvtDmaEnablerFlush.m_Method
    || this->m_DmaEnablerFillFailed
    || this->m_DmaEnablerEnableFailed
    || ((v13 = this->m_EvtDmaEnablerFlush.m_Method) == 0LL
      ? (this->m_EvtDmaEnablerFlush.m_Status = 0)
      : (this->m_EvtDmaEnablerFlush.m_Status = v13((WDFDMAENABLER__ *)v7)),
        this->m_EvtDmaEnablerFlush.m_Status >= 0) )
  {
LABEL_7:
    if ( level >= 0 )
      return (unsigned int)level;
    goto LABEL_35;
  }
  globals = 2;
  if ( level >= 0 )
  {
    level = this->m_EvtDmaEnablerFlush.m_Status;
    goto LABEL_7;
  }
LABEL_35:
  if ( this->m_ObjectSize )
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v14 = 0LL;
  WPP_IFR_SF_qld(m_Globals, a2, a3, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, v14, globals, level);
  return (unsigned int)level;
}
