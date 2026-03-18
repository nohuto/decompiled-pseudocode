/*
 * XREFs of imp_WdfDmaTransactionCancel @ 0x1C005E200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C0060A08 (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall imp_WdfDmaTransactionCancel(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction)
{
  WDFDMATRANSACTION__ *_a1; // rbx
  FxDmaTransactionBase *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+18h] BYREF

  _a1 = (WDFDMATRANSACTION__ *)DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v3 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v3->__vftable);
    v3 = (FxDmaTransactionBase *)((char *)v3 - DmaTransaction);
  }
  if ( v3->m_Type == 5121 )
  {
    pDmaTrans = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDmaTrans, _a1, 0x1401u, DmaTransaction);
    v3 = pDmaTrans;
  }
  m_Globals = v3->m_Globals;
  if ( v3->m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    return FxDmaTransactionBase::CancelResourceAllocation(v3);
  WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x24u, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 0;
}
