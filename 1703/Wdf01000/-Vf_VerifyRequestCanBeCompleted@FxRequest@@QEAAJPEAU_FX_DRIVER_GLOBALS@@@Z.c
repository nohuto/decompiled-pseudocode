/*
 * XREFs of ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D42A8
 * Callers:
 *     Vf_VerifyRequestComplete @ 0x1C00D3BF8 (Vf_VerifyRequestComplete.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00D3C78 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00D3D10 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D438C (-Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4478 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestCanBeCompleted(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  int IsCurrentStackValid; // ebx
  unsigned __int64 _a2; // rcx

  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)FxDriverGlobals, 0xBu) )
  {
    if ( v4->FxVerifierOn )
      return (unsigned int)FxRequest::Vf_VerifyRequestIsAllocatedFromIo(this, v4);
    return 0;
  }
  if ( v4->FxVerifierOn )
    IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(this, v4);
  else
    IsCurrentStackValid = 0;
  if ( IsCurrentStackValid >= 0 )
  {
    if ( this->m_CanComplete )
      return 0;
    IsCurrentStackValid = -1073741808;
    _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x3Eu, WPP_FxRequest_cpp_Traceguids, this->m_Irp.m_Irp, _a2, -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return (unsigned int)IsCurrentStackValid;
}
