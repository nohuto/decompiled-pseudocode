/*
 * XREFs of ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0013F60
 * Callers:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     imp_WdfRequestCancelSentRequest @ 0x1C002FBA0 (imp_WdfRequestCancelSentRequest.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084868 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0084B9C (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C00905E8 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00148C0 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 */

BOOLEAN __fastcall FxRequestBase::Cancel(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  signed __int32 m_IrpCompletionReferenceCount; // eax
  bool v4; // zf
  signed __int32 v5; // edx
  BOOLEAN v6; // al
  BOOLEAN v7; // di
  _FX_DRIVER_GLOBALS *v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  _FX_DRIVER_GLOBALS *v11; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xFu, WPP_FxRequestBase_cpp_Traceguids, this);
  this->m_Canceled = 1;
  m_IrpCompletionReferenceCount = this->m_IrpCompletionReferenceCount;
  while ( 1 )
  {
    v4 = m_IrpCompletionReferenceCount == 0;
    if ( m_IrpCompletionReferenceCount <= 0 )
      break;
    v5 = m_IrpCompletionReferenceCount;
    m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                      &this->m_IrpCompletionReferenceCount,
                                      m_IrpCompletionReferenceCount + 1,
                                      m_IrpCompletionReferenceCount);
    if ( v5 == m_IrpCompletionReferenceCount )
    {
      v4 = v5 == -1;
      break;
    }
  }
  if ( v4 )
  {
    v11 = this->m_Globals;
    if ( v11->FxVerboseOn )
      WPP_IFR_SF_q(v11, 5u, 0xDu, 0x12u, WPP_FxRequestBase_cpp_Traceguids, this);
    return 0;
  }
  else
  {
    v6 = IoCancelIrp(this->m_Irp.m_Irp);
    v7 = v6;
    v8 = this->m_Globals;
    if ( v8->FxVerboseOn )
      WPP_IFR_SF_qid(v8, 5u, 0xDu, 0x10u, WPP_FxRequestBase_cpp_Traceguids, this, (__int64)this->m_Irp.m_Irp, v6);
    if ( _InterlockedExchangeAdd(&this->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      v9 = this->m_Globals;
      if ( v9->FxVerboseOn )
        WPP_IFR_SF_qqq(v9, 5u, 0xDu, 0x11u, WPP_FxRequestBase_cpp_Traceguids, this, this->m_Irp.m_Irp, this->m_Target);
      FxIoTarget::CompleteCanceledRequest(this->m_Target, this);
    }
  }
  return v7;
}
