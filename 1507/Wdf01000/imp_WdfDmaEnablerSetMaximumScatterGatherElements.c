/*
 * XREFs of imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1C005FF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

void __fastcall imp_WdfDmaEnablerSetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler,
        unsigned __int64 MaximumElements)
{
  WDFDMAENABLER__ *_a1; // rbx
  FxDmaEnabler *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  FxDmaEnabler *pDmaEnabler; // [rsp+78h] [rbp+20h] BYREF

  _a1 = (WDFDMAENABLER__ *)DmaEnabler;
  if ( !DmaEnabler )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1400uLL);
  v5 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaEnabler) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DmaEnabler = LOWORD(v5->__vftable);
    v5 = (FxDmaEnabler *)((char *)v5 - DmaEnabler);
  }
  if ( v5->m_Type == 5120 )
  {
    pDmaEnabler = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDmaEnabler, _a1, 0x1400u, DmaEnabler);
    v5 = pDmaEnabler;
  }
  m_Globals = v5->m_Globals;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else if ( MaximumElements )
  {
    v5->m_MaxSGElements = MaximumElements;
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaEnablerAPI_cpp_Traceguids, _a1);
  }
}
