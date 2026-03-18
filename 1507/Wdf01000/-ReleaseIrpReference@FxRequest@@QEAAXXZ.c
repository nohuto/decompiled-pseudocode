/*
 * XREFs of ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0075380
 * Callers:
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C0060A08 (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C0060BF0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C0060D1C (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006100C (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0061CE0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0061F90 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0075430 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007878C (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?Release@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C0078A00 (-Release@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C0078B80 (-Release@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxRequest::ReleaseIrpReference(FxRequest *this)
{
  const void *_a1; // rax
  __int64 v2; // rax

  if ( _InterlockedDecrement(&this->m_IrpReferenceCount) < 0 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x10u, 0x30u, WPP_FxRequest_cpp_Traceguids, _a1);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v2 + 318) )
      DbgBreakPoint();
  }
}
