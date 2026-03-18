/*
 * XREFs of Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00C8720
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00105C0 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C8D20 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToIoQueue(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxRequest *request)
{
  FxRequest *v2; // r10
  const void *v4; // rdx
  const void *_a1; // r10

  v2 = request;
  v4 = 0LL;
  if ( v2->m_IrpAllocation == 2 && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, 0, 0xBu) )
  {
    if ( FxDriverGlobals->FxVerifierOn != (_BYTE)v4 )
      LODWORD(v4) = FxRequest::Vf_VerifyRequestCanBeCompleted(v2, FxDriverGlobals);
    return (unsigned int)v4;
  }
  else
  {
    if ( v2->m_ObjectSize <= (unsigned __int16)v4 )
      _a1 = v4;
    else
      _a1 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x47u, WPP_FxRequestApi_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return 3221225488LL;
  }
}
