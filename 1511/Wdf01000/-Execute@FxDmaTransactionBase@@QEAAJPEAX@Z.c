/*
 * XREFs of ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C005A45C
 * Callers:
 *     imp_WdfDmaTransactionExecute @ 0x1C0058390 (imp_WdfDmaTransactionExecute.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C0069CA0 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0069F18 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaTransactionBase::Execute(FxDmaTransactionBase *this, void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDmaTransactionState *p_m_State; // rsi
  FxDmaTransactionState _a2; // ecx
  const void *_a1; // rax
  unsigned __int64 v8; // rbx
  FxRequest *m_EncodedRequest; // rcx
  FxDmaTransactionBase_vtbl *v10; // rax
  int v11; // ebp
  FxRequest *v12; // rcx
  FxRequest *v13; // rcx

  m_Globals = this->m_Globals;
  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( _a2 != FxDmaTransactionStateInitialized )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransaction_cpp_Traceguids, _a1, _a2);
    if ( this->m_ObjectSize )
      v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v8 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v8, *(int *)p_m_State);
  }
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    FxRequest::AddIrpReference(m_EncodedRequest);
    FxObject::AddRef(
      this->m_EncodedRequest,
      this,
      275,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp");
    this->m_EncodedRequest = (FxRequest *)((unsigned __int64)this->m_EncodedRequest | 1);
  }
  v10 = this->__vftable;
  *p_m_State = FxDmaTransactionStateTransfer;
  this->m_DmaAcquiredContext = Context;
  v11 = v10->StartTransfer(this);
  if ( v11 < 0 )
  {
    v12 = this->m_EncodedRequest;
    *p_m_State = FxDmaTransactionStateTransferFailed;
    this->m_DmaAcquiredContext = 0LL;
    if ( v12 )
    {
      v13 = (FxRequest *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v13;
      FxRequest::ReleaseIrpReference(v13);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        303,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp");
    }
  }
  return (unsigned int)v11;
}
