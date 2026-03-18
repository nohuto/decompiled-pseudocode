/*
 * XREFs of ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006EE5C
 * Callers:
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C00698F0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxDmaTransactionBase::SetImmediateExecution(FxDmaTransactionBase *this, unsigned __int8 Value)
{
  FxDmaTransactionState _a2; // r8d
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx

  _a2 = this->m_State;
  if ( ((_a2 - 1) & 0xFFFFFFF9) != 0 || _a2 == FxDmaTransactionStateTransferCompleted )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  if ( Value )
    this->m_Flags |= 1u;
  else
    this->m_Flags &= ~1u;
}
