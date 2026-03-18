/*
 * XREFs of ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C005B740
 * Callers:
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C0058CD0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxDmaTransactionBase::SetImmediateExecution(FxDmaTransactionBase *this, unsigned __int8 Value)
{
  FxDmaTransactionState _a2; // ecx
  const void *_a1; // rax

  _a2 = this->m_State;
  if ( ((_a2 - 1) & 0xFFFFFFF9) != 0 || _a2 == FxDmaTransactionStateTransferCompleted )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  if ( Value )
    this->m_Flags |= 1u;
  else
    this->m_Flags &= ~1u;
}
