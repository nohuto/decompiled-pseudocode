/*
 * XREFs of ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C0075FA0
 * Callers:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0006040 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::PrintDisposeMessage(FxIoTarget *this)
{
  const void *_a1; // rdx

  _a1 = 0LL;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0xAu, WPP_FxIoTarget_cpp_Traceguids, _a1, this->m_DisposeEvent);
}
