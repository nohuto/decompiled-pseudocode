/*
 * XREFs of ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014060
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00059B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00096E0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0009D68 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000F038 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0013BD4 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00950C0 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::SetCompletionState(FxRequest *this, FxRequestCompletionState NewState)
{
  unsigned int m_CompletionState; // edi
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rcx

  if ( this->m_Completed )
  {
    m_CompletionState = 0;
    m_ObjectSize = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  else
  {
    m_CompletionState = this->m_CompletionState;
    this->m_CompletionState = NewState;
    if ( NewState )
    {
      if ( !m_CompletionState )
        FxObject::AddRef(this, (void *)0x74617453, 1820, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    else if ( m_CompletionState )
    {
      this->Release(this, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  return m_CompletionState;
}
