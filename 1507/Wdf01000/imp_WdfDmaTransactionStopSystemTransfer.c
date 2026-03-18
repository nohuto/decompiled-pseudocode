/*
 * XREFs of imp_WdfDmaTransactionStopSystemTransfer @ 0x1C005F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C0062FC0 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionStopSystemTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction)
{
  WDFDMATRANSACTION__ *_a1; // rbx
  FxDmaSystemTransaction *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDmaTransactionBase *pDmaTrans; // [rsp+60h] [rbp+18h] BYREF

  _a1 = (WDFDMATRANSACTION__ *)DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v3 = (FxDmaSystemTransaction *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v3->__vftable);
    v3 = (FxDmaSystemTransaction *)((char *)v3 - DmaTransaction);
  }
  if ( v3->m_Type == 5121 )
  {
    pDmaTrans = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDmaTrans, _a1, 0x1401u, DmaTransaction);
    v3 = (FxDmaSystemTransaction *)pDmaTrans;
  }
  m_Globals = v3->m_Globals;
  if ( (unsigned int)(v3->m_DmaEnabler->m_Profile - 7) <= 1 )
  {
    FxDmaSystemTransaction::StopTransfer(v3);
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x25u, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1, v3->m_DmaEnabler->m_Profile);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
