/*
 * XREFs of imp_WdfDmaEnablerGetFragmentLength @ 0x1C002A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C002A0D8 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0059230 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall imp_WdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        int DmaDirection)
{
  __int64 v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v5 = 0LL;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !DmaDirection )
    return pDmaEnabler->m_SimplexAdapterInfo.MaximumFragmentLength;
  if ( DmaDirection == 1 )
    return FxDmaEnabler::GetWriteDmaDescription(pDmaEnabler)->m_SimplexAdapterInfo.MaximumFragmentLength;
  WPP_IFR_SF_dq(m_Globals, 2u, 0xFu, 0x12u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, DmaEnabler);
  FxVerifierDbgBreakPoint(m_Globals);
  return v5;
}
