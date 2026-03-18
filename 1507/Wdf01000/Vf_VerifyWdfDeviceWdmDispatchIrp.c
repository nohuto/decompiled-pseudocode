/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00D0030
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall Vf_VerifyWdfDeviceWdmDispatchIrp(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DRIVER_GLOBALS *device,
        FxDevice *DispatchContext,
        _LIST_ENTRY *FxDriverGlobals)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rbx
  FxDevice *Flink; // rax
  bool v8; // si
  __int64 v9; // rax
  _LIST_ENTRY *i; // rax
  __int64 v11; // rax

  p_m_PreprocessInfoListHead = &DispatchContext->m_PreprocessInfoListHead;
  Flink = (FxDevice *)DispatchContext->m_CxDeviceInfoListHead.Flink;
  v8 = FxDriverGlobals == &DispatchContext->m_PreprocessInfoListHead;
  while ( Flink != (FxDevice *)&DispatchContext->m_CxDeviceInfoListHead )
  {
    if ( Flink->m_Globals == *(_FX_DRIVER_GLOBALS **)&device[-7].DisplaceDriverUnload )
      goto LABEL_6;
    Flink = (FxDevice *)Flink->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
  }
  Flink = 0LL;
LABEL_6:
  if ( !Flink )
  {
    WPP_IFR_SF_d(DispatchContext->m_Globals, 2u, 0xDu, 0xCu, WPP_FxDeviceApiKm_cpp_Traceguids, -1073741808);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v9 + 318) )
      DbgBreakPoint();
  }
  for ( i = p_m_PreprocessInfoListHead->Flink; i != p_m_PreprocessInfoListHead; i = i->Flink )
  {
    if ( FxDriverGlobals == i )
    {
      v8 = 1;
      break;
    }
  }
  if ( !v8 )
  {
    WPP_IFR_SF_qd(
      DispatchContext->m_Globals,
      2u,
      0xDu,
      0xDu,
      WPP_FxDeviceApiKm_cpp_Traceguids,
      FxDriverGlobals,
      -1073741811);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v11 + 318) )
      DbgBreakPoint();
  }
}
