/*
 * XREFs of imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C0058F00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 */

void *__fastcall imp_WdfDmaTransactionWdmGetTransferContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  const void *_a2; // rcx
  unsigned int v7; // edx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    v7 = *(_DWORD *)(v5 + 120);
    if ( v7 > 1 && v7 - 7 > 1 )
      return *(void **)(v5 + 168);
    WPP_IFR_SF_ql(
      m_Globals,
      2u,
      0xFu,
      0x1Du,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      *(_DWORD *)(v5 + 120));
  }
  else
  {
    if ( *(_WORD *)(v4 + 10) )
      _a2 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x1Cu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
