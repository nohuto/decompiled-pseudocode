/*
 * XREFs of ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA218
 * Callers:
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAC24 (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAD6C (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsTagRequest(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  const void *_a1; // rcx

  if ( this->m_Completed || (this->m_VerifierFlags & 3) != 0 )
  {
    return 0;
  }
  else
  {
    v3 = -1073741811;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x3Au, WPP_FxRequest_cpp_Traceguids, _a1, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v3;
}
