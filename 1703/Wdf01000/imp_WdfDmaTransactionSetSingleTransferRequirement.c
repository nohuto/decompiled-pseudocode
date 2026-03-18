/*
 * XREFs of imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C00699F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00360A0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 RequireSingleTransfer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  const void *v8; // r9
  __int16 v9; // ax
  const void *_a2; // rcx
  int v11; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 2u) >= 0 )
  {
    if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    {
      v9 = *(_WORD *)(v6 + 10);
      _a2 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v9 )
        _a2 = v8;
      WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x19u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
      goto LABEL_6;
    }
    v11 = *(_DWORD *)(v7 + 120);
    if ( (unsigned int)(v11 - 1) > 1 && v11 != 7 )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v11);
LABEL_6:
      FxVerifierDbgBreakPoint(m_Globals);
      return;
    }
    *(_BYTE *)(v7 + 248) = RequireSingleTransfer;
  }
}
