/*
 * XREFs of imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C0066260
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00650B0 (WPP_IFR_SF_ql.c)
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
  const void *_a2; // rcx
  int v10; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 2u) >= 0 )
  {
    if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    {
      if ( *(_WORD *)(v6 + 10) <= (unsigned __int16)v8 )
        _a2 = v8;
      else
        _a2 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x19u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
      goto LABEL_7;
    }
    v10 = *(_DWORD *)(v7 + 120);
    if ( (unsigned int)(v10 - 1) > 1 && v10 != 7 )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v10);
LABEL_7:
      FxVerifierDbgBreakPoint(m_Globals);
      return;
    }
    *(_BYTE *)(v7 + 248) = RequireSingleTransfer;
  }
}
