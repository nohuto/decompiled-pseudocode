/*
 * XREFs of ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0069F18
 * Callers:
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C0059E08 (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C005A080 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C005A1AC (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C005A45C (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C005B110 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C005B3C0 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0069F80 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C006CBD8 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?Release@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C006CE40 (-Release@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C006CFC0 (-Release@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::ReleaseIrpReference(FxRequest *this)
{
  const void *_a1; // rax

  if ( _InterlockedDecrement(&this->m_IrpReferenceCount) < 0 )
  {
    _a1 = 0LL;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x10u, 0x30u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
}
