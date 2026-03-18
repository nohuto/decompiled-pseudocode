/*
 * XREFs of ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C9154
 * Callers:
 *     Vf_VerifyWdfRequestIsCanceled @ 0x1C00C88C0 (Vf_VerifyWdfRequestIsCanceled.c)
 *     ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C92B0 (-Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C9880 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C99B0 (-Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C9DE8 (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00C9E60 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9F04 (-Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsNotCancelable(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  const void *_a1; // rcx

  if ( (this->m_VerifierFlags & 0x10) != 0 )
  {
    v3 = -1073741808;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x36u, WPP_FxRequest_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    return 0;
  }
  return v3;
}
