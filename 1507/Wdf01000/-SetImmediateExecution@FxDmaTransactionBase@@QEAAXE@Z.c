/*
 * XREFs of ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0062314
 * Callers:
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C005F4E0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxDmaTransactionBase::SetImmediateExecution(FxDmaTransactionBase *this, unsigned __int8 Value)
{
  FxDmaTransactionState _a2; // ecx
  const void *_a1; // rax
  __int64 v6; // rax

  _a2 = this->m_State;
  if ( ((_a2 - 1) & 0xFFFFFFF9) != 0 || _a2 == FxDmaTransactionStateTransferCompleted )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, _a2);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v6 + 318) )
      DbgBreakPoint();
  }
  if ( Value )
    this->m_Flags |= 1u;
  else
    this->m_Flags &= ~1u;
}
