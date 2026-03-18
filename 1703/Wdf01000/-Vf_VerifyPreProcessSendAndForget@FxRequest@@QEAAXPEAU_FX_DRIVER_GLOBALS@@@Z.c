/*
 * XREFs of ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4148
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0065FEC (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifyPreProcessSendAndForget(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rcx
  const void *_a1; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v7; // rbx

  m_Completion = this->m_CompletionRoutine.m_Completion;
  if ( m_Completion )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0x17u, WPP_FxRequest_cpp_Traceguids, _a1, m_Completion);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  if ( !this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
    && ((__int64)this->m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF) != 1 )
  {
    m_ObjectSize = this->m_ObjectSize;
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x18u, WPP_FxRequest_cpp_Traceguids, v7);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
