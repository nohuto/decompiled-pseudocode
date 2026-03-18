/*
 * XREFs of imp_WdfDmaTransactionSetImmediateExecution @ 0x1C005F4E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0062314 (-SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z.c)
 */

void __fastcall imp_WdfDmaTransactionSetImmediateExecution(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned __int8 UseImmediateExecution)
{
  WDFDMATRANSACTION__ *_a1; // rbx
  FxDmaTransactionBase *v5; // rcx
  FxDmaEnabler *m_DmaEnabler; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a2; // rdx
  FxDmaTransactionBase *pDmaTrans; // [rsp+78h] [rbp+20h] BYREF

  _a1 = (WDFDMATRANSACTION__ *)DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v5 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v5->__vftable);
    v5 = (FxDmaTransactionBase *)((char *)v5 - DmaTransaction);
  }
  if ( v5->m_Type == 5121 )
  {
    pDmaTrans = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDmaTrans, _a1, 0x1401u, DmaTransaction);
    v5 = pDmaTrans;
  }
  m_DmaEnabler = v5->m_DmaEnabler;
  m_Globals = v5->m_Globals;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    FxDmaTransactionBase::SetImmediateExecution(v5, UseImmediateExecution);
  }
  else
  {
    if ( m_DmaEnabler->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1, _a2);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
