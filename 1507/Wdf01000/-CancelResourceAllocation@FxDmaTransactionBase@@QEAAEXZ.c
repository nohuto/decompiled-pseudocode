/*
 * XREFs of ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C0060A08
 * Callers:
 *     imp_WdfDmaTransactionCancel @ 0x1C005E200 (imp_WdfDmaTransactionCancel.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0075380 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDmaTransactionBase::CancelResourceAllocation(FxDmaTransactionBase *this)
{
  FxDmaTransactionState *p_m_State; // rsi
  FxDmaTransactionState _a2; // ecx
  unsigned __int8 v4; // bp
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v6; // rcx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  ULONG_PTR v10; // rbx

  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( _a2 == FxDmaTransactionStateCreated || (unsigned int)(_a2 - 7) <= 1 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    p_m_Globals = &this->m_Globals;
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x17u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, _a2);
    if ( this->m_ObjectSize )
      v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v10 = 0LL;
    FxVerifierBugCheckWorker(*p_m_Globals, WDF_DMA_FATAL_ERROR, v10, *(int *)p_m_State);
  }
  v4 = this->m_AdapterInfo->AdapterObject->DmaOperations->CancelAdapterChannel(
         this->m_AdapterInfo->AdapterObject,
         this->m_DmaEnabler->m_FDO,
         this->m_TransferContext);
  if ( v4 )
  {
    m_EncodedRequest = this->m_EncodedRequest;
    *p_m_State = FxDmaTransactionStateTransferFailed;
    if ( m_EncodedRequest )
    {
      v6 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v6;
      FxRequest::ReleaseIrpReference(v6);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        303,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp");
    }
  }
  return v4;
}
