/*
 * XREFs of ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0099024
 * Callers:
 *     ?RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0079280 (-RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPkgPnp::RemoveDmaEnabler(FxPkgPnp *this, unsigned __int64 Enabler)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rax

  m_Globals = this->m_Globals;
  _a2 = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    if ( *(_WORD *)(Enabler + 10) )
      _a2 = (const void *)(Enabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xDu, WPP_FxPkgPnpKM_cpp_Traceguids, (const void *)Enabler, _a2);
  }
  FxTransactionedList::Remove(this->m_DmaEnablerList, this->m_Globals, (FxTransactionedEntry *)(Enabler + 120));
}
