/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00B9360
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C0064910 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?IsCxDriverInIoPath@FxDevice@@QEAAEPEAVFxDriver@@@Z @ 0x1C006440C (-IsCxDriverInIoPath@FxDevice@@QEAAEPEAVFxDriver@@@Z.c)
 */

void __fastcall Vf_VerifyWdfDeviceWdmDispatchIrp(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DRIVER_GLOBALS *device,
        FxDevice *DispatchContext,
        _LIST_ENTRY *FxDriverGlobals)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rbx
  bool v7; // si
  _LIST_ENTRY *i; // rax

  p_m_PreprocessInfoListHead = &DispatchContext->m_PreprocessInfoListHead;
  v7 = FxDriverGlobals == &DispatchContext->m_PreprocessInfoListHead;
  if ( !FxDevice::IsCxDriverInIoPath(DispatchContext, *(FxDriver **)&device[-7].DisplaceDriverUnload) )
  {
    WPP_IFR_SF_d(DispatchContext->m_Globals, 2u, 0xDu, 0xCu, WPP_FxDeviceApiKm_cpp_Traceguids, -1073741808);
    FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
  }
  for ( i = p_m_PreprocessInfoListHead->Flink; i != p_m_PreprocessInfoListHead; i = i->Flink )
  {
    if ( FxDriverGlobals == i )
    {
      v7 = 1;
      break;
    }
  }
  if ( !v7 )
  {
    WPP_IFR_SF_qd(
      DispatchContext->m_Globals,
      2u,
      0xDu,
      0xDu,
      WPP_FxDeviceApiKm_cpp_Traceguids,
      FxDriverGlobals,
      -1073741811);
    FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
  }
}
