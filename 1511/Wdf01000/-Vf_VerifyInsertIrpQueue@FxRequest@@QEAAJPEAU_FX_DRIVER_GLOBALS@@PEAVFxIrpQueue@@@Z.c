/*
 * XREFs of ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00B9B28
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000EE78 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0022B10 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA1A8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyInsertIrpQueue(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIrpQueue *IrpQueue)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  unsigned __int64 _a2; // rcx

  v3 = 0;
  if ( this->m_IrpQueue )
  {
    v5 = -1073741595;
    if ( this->m_ObjectSize )
      _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x28u, WPP_FxRequest_cpp_Traceguids, IrpQueue, _a2, -1073741595);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    if ( FxDriverGlobals->FxVerifierOn )
      return (unsigned int)FxRequest::Vf_VerifyRequestIsNotCompleted(this, FxDriverGlobals);
    return v3;
  }
  return v5;
}
