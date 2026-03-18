/*
 * XREFs of Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00D05D0
 * Callers:
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C006E660 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0CD8 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(
        _FX_DRIVER_GLOBALS *fxDriverGlobals,
        FxRequest *request)
{
  int CanBeCompleted; // edi
  FxIrp *_a1; // rcx
  unsigned __int64 _a2; // rbx
  const void *v7; // rbx

  if ( request->m_IrpAllocation != 2
    || !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(fxDriverGlobals, (unsigned int)request, 0xBu) )
  {
    CanBeCompleted = -1073741808;
    if ( request->m_ObjectSize )
      v7 = (const void *)((unsigned __int64)request ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v7 = 0LL;
    WPP_IFR_SF_qd(fxDriverGlobals, 2u, 0x10u, 0x48u, WPP_FxRequestApi_cpp_Traceguids, v7, -1073741808);
    goto LABEL_16;
  }
  if ( fxDriverGlobals->FxVerifierOn )
    CanBeCompleted = FxRequest::Vf_VerifyRequestCanBeCompleted(request, fxDriverGlobals);
  else
    CanBeCompleted = 0;
  if ( CanBeCompleted >= 0 )
  {
    _a1 = &request->m_Irp;
    if ( request->m_Irp.m_Irp->CurrentLocation <= 1 )
    {
      CanBeCompleted = -1073741808;
      if ( request->m_ObjectSize )
        _a2 = (unsigned __int64)request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      WPP_IFR_SF_qid(fxDriverGlobals, 2u, 0x10u, 0x49u, WPP_FxRequestApi_cpp_Traceguids, _a1, _a2, -1073741808);
LABEL_16:
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( fxDriverGlobals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
  return (unsigned int)CanBeCompleted;
}
