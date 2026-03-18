/*
 * XREFs of ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9918
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0022948 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  const void *v3; // rdx
  __int64 v4; // r10
  const void *_a1; // r10

  if ( FxDriverGlobals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, 0, 0xBu)
     || FxDriverGlobals->FxVerifyDownlevel != (_BYTE)v3) )
  {
    if ( *(_WORD *)(v4 + 10) <= (unsigned __int16)v3 )
      _a1 = v3;
    else
      _a1 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x32u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
