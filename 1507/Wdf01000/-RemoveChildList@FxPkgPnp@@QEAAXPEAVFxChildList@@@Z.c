/*
 * XREFs of ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C009E7DC
 * Callers:
 *     ?RemoveChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C0075FD0 (-RemoveChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPkgPnp::RemoveChildList(FxPkgPnp *this, unsigned __int64 List)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rax

  m_Globals = this->m_Globals;
  _a2 = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    if ( *(_WORD *)(List + 10) )
      _a2 = (const void *)(List ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x4Bu, WPP_FxPkgPnp_cpp_Traceguids, (const void *)List, _a2);
  }
  FxTransactionedList::Remove(&this->m_EnumInfo->m_ChildListList, this->m_Globals, (FxTransactionedEntry *)(List + 120));
}
