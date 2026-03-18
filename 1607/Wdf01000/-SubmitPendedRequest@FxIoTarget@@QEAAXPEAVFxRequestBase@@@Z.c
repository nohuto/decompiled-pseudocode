/*
 * XREFs of ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084288
 * Callers:
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002AF08 (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C008CBB0 (-Start@FxUsbDevice@@MEAAJXZ.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000DBD0 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0063A84 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0083D90 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::SubmitPendedRequest(FxIoTarget *this, FxRequestBase *Request)
{
  char v4; // si
  unsigned __int8 v5; // r8
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequestBase *TraceObjectHandle; // rax
  __int64 _a2; // r11

  v4 = FxIoTarget::Submit(this, Request, 0LL, 0);
  if ( (v4 & 1) != 0 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a1 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qq(v7, 5u, 0xEu, 0xCu, WPP_FxIoTarget_cpp_Traceguids, _a1, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
  }
  if ( (v4 & 3) != 0 )
  {
    FxIoTarget::DecrementIoCount(this);
    Request->Release(Request, this, 263, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
  else
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qid(
        m_Globals,
        5u,
        0xEu,
        0xDu,
        WPP_FxIoTarget_cpp_Traceguids,
        TraceObjectHandle,
        _a2,
        *(_DWORD *)(_a2 + 48));
    }
    Request->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::HandleFailedResubmit(this, Request, v5);
  }
}
