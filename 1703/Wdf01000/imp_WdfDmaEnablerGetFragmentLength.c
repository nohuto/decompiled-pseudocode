/*
 * XREFs of imp_WdfDmaEnablerGetFragmentLength @ 0x1C003BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0067EC4 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall imp_WdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        int DmaDirection)
{
  __int64 v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  $1E5498178E6BFFD2FD5346FC9D35457C *v8; // rbx
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v5 = 0LL;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !DmaDirection )
    return pDmaEnabler->m_SimplexAdapterInfo.MaximumFragmentLength;
  if ( DmaDirection == 1 )
  {
    v8 = ($1E5498178E6BFFD2FD5346FC9D35457C *)&pDmaEnabler->m_DuplexAdapterInfo[1];
    if ( (*((_BYTE *)pDmaEnabler + 380) & 0x10) == 0 )
      v8 = &pDmaEnabler->184;
    return v8->m_SimplexAdapterInfo.MaximumFragmentLength;
  }
  else
  {
    WPP_IFR_SF_dq(m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, DmaEnabler);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return v5;
}
