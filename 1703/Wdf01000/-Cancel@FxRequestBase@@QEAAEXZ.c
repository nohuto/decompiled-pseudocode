/*
 * XREFs of ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002F60C
 * Callers:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0031968 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     imp_WdfRequestCancelSentRequest @ 0x1C0032CC0 (imp_WdfRequestCancelSentRequest.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088748 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C008CCD4 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0029D8C (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 */

BOOLEAN __fastcall FxRequestBase::Cancel(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  signed __int32 m_IrpCompletionReferenceCount; // eax
  bool v4; // zf
  signed __int32 v5; // edx
  BOOLEAN v6; // al
  unsigned __int8 v7; // r8
  BOOLEAN v8; // di
  _FX_DRIVER_GLOBALS *v9; // rcx
  _FX_DRIVER_GLOBALS *v10; // rcx
  _FX_DRIVER_GLOBALS *v12; // rcx

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
    v12 = this->m_Globals;
    if ( v12->FxVerboseOn )
      WPP_IFR_SF_q(v12, 5u, 0xDu, 0x12u, WPP_FxRequestBase_cpp_Traceguids, this);
    return 0;
  }
  else
  {
    v6 = IoCancelIrp(this->m_Irp.m_Irp);
    v8 = v6;
    v9 = this->m_Globals;
    if ( v9->FxVerboseOn )
      WPP_IFR_SF_qid(v9, 5u, 0xDu, 0x10u, WPP_FxRequestBase_cpp_Traceguids, this, (__int64)this->m_Irp.m_Irp, v6);
    if ( _InterlockedExchangeAdd(&this->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      v10 = this->m_Globals;
      if ( v10->FxVerboseOn )
        WPP_IFR_SF_qqq(v10, 5u, 0xDu, 0x11u, WPP_FxRequestBase_cpp_Traceguids, this, this->m_Irp.m_Irp, this->m_Target);
      FxIoTarget::CompleteCanceledRequest(this->m_Target, this, v7);
    }
  }
  return v8;
}
