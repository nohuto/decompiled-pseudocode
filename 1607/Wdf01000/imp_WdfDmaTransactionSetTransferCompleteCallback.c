/*
 * XREFs of imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x1C0066360
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00650B0 (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetTransferCompleteCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        _LIST_ENTRY *DmaCompletionRoutine,
        _LIST_ENTRY *DmaCompletionContext)
{
  FxDmaTransactionBase *v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_DMA_PROFILE _a2; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  v7 = pDmaTrans;
  m_Globals = pDmaTrans->m_Globals;
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( (unsigned int)(_a2 - 7) <= 1 )
  {
    pDmaTrans[1].m_ChildEntry.Flink = DmaCompletionRoutine;
    v7[1].m_ChildEntry.Blink = DmaCompletionContext;
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Cu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
