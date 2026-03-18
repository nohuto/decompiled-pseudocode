/*
 * XREFs of ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0CD8
 * Callers:
 *     Vf_VerifyRequestComplete @ 0x1C00D046C (Vf_VerifyRequestComplete.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00D0504 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00D05D0 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0DF4 (-Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0F50 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestCanBeCompleted(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  int IsCurrentStackValid; // ebx
  unsigned __int64 _a2; // rax

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
    if ( this->m_ObjectSize )
      _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x3Eu, WPP_FxRequest_cpp_Traceguids, this->m_Irp.m_Irp, _a2, -1073741808);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  return (unsigned int)IsCurrentStackValid;
}
