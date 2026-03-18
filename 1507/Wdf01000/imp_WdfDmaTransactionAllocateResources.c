/*
 * XREFs of imp_WdfDmaTransactionAllocateResources @ 0x1C005DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qLd @ 0x1C0028BB8 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0061F90 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDmaTransactionAllocateResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned int DmaDirection,
        unsigned int RequiredMapRegisters,
        void (__fastcall *EvtReserveDmaFunction)(WDFDMATRANSACTION__ *, void *),
        void *EvtReserveDmaContext)
{
  WDFDMATRANSACTION__ *_a1; // rsi
  FxDmaPacketTransaction *v9; // rcx
  FxDmaEnabler *m_DmaEnabler; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 _a2; // rdx
  unsigned int m_Profile; // eax
  FxDmaPacketTransaction *pDmaTrans; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]

  _a1 = (WDFDMATRANSACTION__ *)DmaTransaction;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v9 = (FxDmaPacketTransaction *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaTransaction) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DmaTransaction = LOWORD(v9->__vftable);
    v9 = (FxDmaPacketTransaction *)((char *)v9 - DmaTransaction);
  }
  if ( v9->m_Type == 5121 )
  {
    pDmaTrans = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pDmaTrans, _a1, 0x1401u, DmaTransaction);
    v9 = pDmaTrans;
  }
  m_DmaEnabler = v9->m_DmaEnabler;
  m_Globals = v9->m_Globals;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    if ( m_DmaEnabler->m_ObjectSize )
      _a2 = (unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    WPP_IFR_SF_qid(v9->m_Globals, 2u, 0xFu, 0x1Fu, WPP_FxDmaTransactionAPI_cpp_Traceguids, _a1, _a2, -1073741808);
    goto LABEL_23;
  }
  m_Profile = m_DmaEnabler->m_Profile;
  if ( m_Profile > 8 || (LODWORD(m_DmaEnabler) = 394, !_bittest((const int *)&m_DmaEnabler, m_Profile)) )
  {
    WPP_IFR_SF_qLd(
      m_Globals,
      (unsigned __int8)m_DmaEnabler,
      0xFu,
      0x20u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      _a1,
      m_Profile,
      -1073741808);
LABEL_23:
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  if ( DmaDirection <= 1 )
  {
    if ( !EvtReserveDmaFunction )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    return FxDmaPacketTransaction::ReserveAdapter(
             v9,
             RequiredMapRegisters,
             (_WDF_DMA_DIRECTION)DmaDirection,
             EvtReserveDmaFunction,
             EvtReserveDmaContext);
  }
  else
  {
    WPP_IFR_SF_qDd(
      v9->m_Globals,
      0x8Au,
      0xFu,
      0x21u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      _a1,
      DmaDirection,
      0xC000000D);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741811;
  }
}
