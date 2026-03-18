/*
 * XREFs of ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C001F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C00229AC (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxDevice::AddChildList(FxDevice *this, unsigned __int64 List)
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
      if ( *(_WORD *)(List + 10) )
        _a2 = (const void *)(List ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x4Au, WPP_FxPkgPnp_cpp_Traceguids, (const void *)List, _a2);
    }
    FxTransactionedList::Add(
      &m_PkgPnp->m_EnumInfo->m_ChildListList,
      m_PkgPnp->m_Globals,
      (FxTransactionedEntry *)(List + 120));
  }
}
