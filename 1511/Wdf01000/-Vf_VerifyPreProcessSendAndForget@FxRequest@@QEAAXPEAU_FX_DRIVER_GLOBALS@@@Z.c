/*
 * XREFs of ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9BA8
 * Callers:
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0022948 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifyPreProcessSendAndForget(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  void (__fastcall *_a2)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rcx
  const void *_a1; // rax
  const void *v6; // rbx

  _a2 = this->m_CompletionRoutine.m_Completion;
  if ( _a2 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0x17u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  if ( !this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
    && ((__int64)this->m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF) != 1 )
  {
    if ( this->m_ObjectSize )
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v6 = 0LL;
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x18u, WPP_FxRequest_cpp_Traceguids, v6);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
