/*
 * XREFs of ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C000E810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C001E12C (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxDevice::AddDmaEnabler(FxDevice *this, unsigned __int64 Enabler)
{
  FxPkgPnp *m_PkgPnp; // rbx
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_PkgPnp = this->m_PkgPnp;
  _a2 = 0LL;
  if ( m_PkgPnp )
  {
    m_Globals = m_PkgPnp->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( *(_WORD *)(Enabler + 10) )
        _a2 = (const void *)(Enabler ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xCu, WPP_FxPkgPnpKM_cpp_Traceguids, (const void *)Enabler, _a2);
    }
    FxTransactionedList::Add(m_PkgPnp->m_DmaEnablerList, m_PkgPnp->m_Globals, (FxTransactionedEntry *)(Enabler + 120));
  }
}
