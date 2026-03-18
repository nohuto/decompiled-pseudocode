/*
 * XREFs of ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C8ED4
 * Callers:
 *     imp_WdfRequestGetParameters @ 0x1C000F140 (imp_WdfRequestGetParameters.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C001B638 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C8D20 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsCurrentStackValid(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _IRP *m_Irp; // rdx
  unsigned int v4; // ebx
  const void *_a1; // r8
  unsigned __int64 _a2; // r8

  m_Irp = this->m_Irp.m_Irp;
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation <= m_Irp->StackCount )
      return 0;
    v4 = -1073741808;
    if ( this->m_ObjectSize )
      _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x3Du, WPP_FxRequest_cpp_Traceguids, m_Irp, _a2, -1073741808);
  }
  else
  {
    v4 = -1073741808;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x3Cu, WPP_FxRequest_cpp_Traceguids, _a1, -1073741808);
  }
  FxVerifierDbgBreakPoint(FxDriverGlobals);
  return v4;
}
