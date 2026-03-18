/*
 * XREFs of Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00D0504
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C006E500 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0CD8 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToIoQueue(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxRequest *request)
{
  FxRequest *v2; // r10
  unsigned int v3; // ebx
  const void *_a1; // r10

  v2 = request;
  v3 = 0;
  LOBYTE(request) = 2;
  if ( v2->m_IrpAllocation == 2
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)request, 0xBu) )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      return (unsigned int)FxRequest::Vf_VerifyRequestCanBeCompleted(v2, FxDriverGlobals);
    return v3;
  }
  else
  {
    if ( v2->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(
      FxDriverGlobals,
      (unsigned __int8)request,
      0x10u,
      0x47u,
      WPP_FxRequestApi_cpp_Traceguids,
      _a1,
      -1073741808);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
}
