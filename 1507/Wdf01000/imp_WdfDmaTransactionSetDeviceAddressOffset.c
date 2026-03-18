/*
 * XREFs of imp_WdfDmaTransactionSetDeviceAddressOffset @ 0x1C005F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetDeviceAddressOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned int Offset)
{
  WDFDMATRANSACTION__ *_a1; // rbx
  FxDmaTransactionBase *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
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
  m_Globals = v5->m_Globals;
  if ( (unsigned int)(v5->m_DmaEnabler->m_Profile - 7) <= 1 )
  {
    HIDWORD(v5[1].m_Globals) = Offset;
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Bu, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1, v5->m_DmaEnabler->m_Profile);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
