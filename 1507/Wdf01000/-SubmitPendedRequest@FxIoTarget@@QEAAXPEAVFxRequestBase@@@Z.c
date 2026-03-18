/*
 * XREFs of ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084648
 * Callers:
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00147DC (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C008D730 (-Start@FxUsbDevice@@MEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C005CAB4 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008409C (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C00842B4 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 */

void __fastcall FxIoTarget::SubmitPendedRequest(FxIoTarget *this, FxRequestBase *Request)
{
  char v4; // si
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v7; // rcx
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v9; // r10
  unsigned __int64 v10; // rcx
  FxRequestBase *v11; // rax

  v4 = FxIoTarget::Submit(this, Request, 0LL, 0);
  if ( (v4 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( Request->m_ObjectSize )
        v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v7 = 0LL;
      _a1 = Request;
      if ( v7 )
        _a1 = (FxRequestBase *)v7;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTarget_cpp_Traceguids, _a1, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
  }
  if ( (v4 & 3) != 0 )
  {
    if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::PrintDisposeMessage(this);
      KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
    }
    Request->Release(Request, this, 263, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
  else
  {
    v9 = this->m_Globals;
    if ( v9->FxVerboseOn )
    {
      if ( Request->m_ObjectSize )
        v10 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v10 = 0LL;
      v11 = Request;
      if ( v10 )
        v11 = (FxRequestBase *)v10;
      WPP_IFR_SF_qid(
        v9,
        5u,
        0xEu,
        0xDu,
        WPP_FxIoTarget_cpp_Traceguids,
        v11,
        (__int64)Request->m_Irp.m_Irp,
        Request->m_Irp.m_Irp->IoStatus.Status);
    }
    Request->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::HandleFailedResubmit(this, Request, v5);
  }
}
