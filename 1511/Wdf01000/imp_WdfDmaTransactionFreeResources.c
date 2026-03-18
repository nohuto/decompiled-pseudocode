/*
 * XREFs of imp_WdfDmaTransactionFreeResources @ 0x1C00583D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C005AFF8 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionFreeResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  FxDmaEnabler *m_DmaEnabler; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int m_Profile; // eax
  int v6; // edx
  __int64 v7; // rcx
  FxDmaPacketTransaction *v8; // r8
  const void *_a2; // rcx
  FxDmaPacketTransaction *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_DmaEnabler = pDmaTrans->m_DmaEnabler;
  m_Globals = pDmaTrans->m_Globals;
  m_Profile = m_DmaEnabler->m_Profile;
  if ( m_Profile <= 8 && (v6 = 394, _bittest(&v6, m_Profile)) )
  {
    if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    {
      FxDmaPacketTransaction::ReleaseAdapter(v8);
      return;
    }
    if ( *(_WORD *)(v7 + 10) )
      _a2 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x23u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x22u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, m_Profile);
  }
  FxVerifierDbgBreakPoint(m_Globals);
}
