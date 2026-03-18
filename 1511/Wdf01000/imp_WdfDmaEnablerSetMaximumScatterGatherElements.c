/*
 * XREFs of imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1C00594F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 */

void __fastcall imp_WdfDmaEnablerSetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 MaximumElements)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDmaEnabler *pDmaEnabler; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) >= 0 )
  {
    if ( MaximumElements )
      pDmaEnabler->m_MaxSGElements = MaximumElements;
    else
      WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaEnabler);
  }
}
