/*
 * XREFs of imp_WdfDmaTransactionAllocateResources @ 0x1C0065450
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qLd @ 0x1C002E0B8 (WPP_IFR_SF_qLd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00678FC (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     WPP_IFR_SF_qDd @ 0x1C00700CC (WPP_IFR_SF_qDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

int __fastcall imp_WdfDmaTransactionAllocateResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int DmaDirection,
        unsigned int RequiredMapRegisters,
        void (__fastcall *EvtReserveDmaFunction)(WDFDMATRANSACTION__ *, void *),
        void *EvtReserveDmaContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v10; // dl
  __int64 v11; // rcx
  FxDmaPacketTransaction *v12; // r10
  unsigned __int64 _a2; // rcx
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDmaPacketTransaction *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    if ( *(_WORD *)(v11 + 10) )
      _a2 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    v14 = -1073741808;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xFu, 0x21u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2, -1073741808);
    goto LABEL_14;
  }
  v15 = *(_DWORD *)(v11 + 376);
  if ( v15 > 8 || (v16 = 394, !_bittest(&v16, v15)) )
  {
    v14 = -1073741808;
    WPP_IFR_SF_qLd(
      m_Globals,
      v10,
      0xFu,
      0x22u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      v15,
      -1073741808);
    goto LABEL_14;
  }
  if ( DmaDirection > 1 )
  {
    v14 = -1073741811;
    WPP_IFR_SF_qDd(
      m_Globals,
      v10,
      0xFu,
      0x23u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      DmaDirection,
      0xC000000D);
LABEL_14:
    FxVerifierDbgBreakPoint(m_Globals);
    return v14;
  }
  if ( !EvtReserveDmaFunction )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  return FxDmaPacketTransaction::ReserveAdapter(
           v12,
           RequiredMapRegisters,
           (_WDF_DMA_DIRECTION)DmaDirection,
           EvtReserveDmaFunction,
           EvtReserveDmaContext);
}
