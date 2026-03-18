/*
 * XREFs of ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C006DED8
 * Callers:
 *     imp_WdfDmaTransactionCancel @ 0x1C0068CD0 (imp_WdfDmaTransactionCancel.c)
 * Callees:
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C51C (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall FxDmaTransactionBase::CancelResourceAllocation(FxDmaTransactionBase *this)
{
  FxDmaTransactionState _a2; // ecx
  unsigned __int8 v3; // bl
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v5; // rcx
  unsigned __int64 v7; // rbx
  const void *_a1; // rax

  _a2 = this->m_State;
  if ( _a2 == FxDmaTransactionStateCreated || (unsigned int)(_a2 - 7) <= 1 )
  {
    v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x1Fu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
  }
  v3 = this->m_AdapterInfo->AdapterObject->DmaOperations->CancelAdapterChannel(
         this->m_AdapterInfo->AdapterObject,
         this->m_DmaEnabler->m_FDO,
         this->m_TransferContext);
  if ( v3 )
  {
    m_EncodedRequest = this->m_EncodedRequest;
    this->m_State = FxDmaTransactionStateTransferFailed;
    if ( m_EncodedRequest )
    {
      v5 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v5;
      FxRequest::ReleaseIrpReference(v5);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  return v3;
}
