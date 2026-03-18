/*
 * XREFs of imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x1C005F690
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetTransferCompleteCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        _LIST_ENTRY *DmaCompletionRoutine,
        _LIST_ENTRY *DmaCompletionContext)
{
  WDFDMATRANSACTION__ *_a1; // rbx
  FxDmaTransactionBase *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDmaTransactionBase *pDmaTrans; // [rsp+40h] [rbp-28h] BYREF

  _a1 = (WDFDMATRANSACTION__ *)DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v7 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v7->__vftable);
    v7 = (FxDmaTransactionBase *)((char *)v7 - DmaTransaction);
  }
  if ( v7->m_Type == 5121 )
  {
    pDmaTrans = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDmaTrans, _a1, 0x1401u, DmaTransaction);
    v7 = pDmaTrans;
  }
  m_Globals = v7->m_Globals;
  if ( (unsigned int)(v7->m_DmaEnabler->m_Profile - 7) <= 1 )
  {
    v7[1].m_ChildEntry.Flink = DmaCompletionRoutine;
    v7[1].m_ChildEntry.Blink = DmaCompletionContext;
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1, v7->m_DmaEnabler->m_Profile);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
