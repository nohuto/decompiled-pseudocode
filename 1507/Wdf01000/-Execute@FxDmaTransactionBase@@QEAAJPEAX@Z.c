/*
 * XREFs of ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006100C
 * Callers:
 *     imp_WdfDmaTransactionExecute @ 0x1C005E670 (imp_WdfDmaTransactionExecute.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C0074F10 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0075380 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxDmaTransactionBase::Execute(FxDmaTransactionBase *this, void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDmaTransactionState *p_m_State; // rsi
  FxDmaTransactionState _a2; // ecx
  const void *_a1; // rax
  ULONG_PTR v8; // rbx
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v10; // rcx
  unsigned int v11; // edx
  FxTagTracker *Blink; // rcx
  FxDmaTransactionBase_vtbl *v13; // rax
  int v14; // ebp
  FxRequest *v15; // rcx
  FxRequest *v16; // rcx

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
    v10 = this->m_EncodedRequest;
    v11 = _InterlockedIncrement(&v10->m_Refcnt);
    if ( SLOBYTE(v10->m_ObjectFlags) >= 0 )
      Blink = 0LL;
    else
      Blink = (FxTagTracker *)v10[-1].m_ForwardProgressList.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        Blink,
        this,
        275,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp",
        TagAddRef,
        v11);
    this->m_EncodedRequest = (FxRequest *)((unsigned __int64)this->m_EncodedRequest | 1);
  }
  v13 = this->__vftable;
  *p_m_State = FxDmaTransactionStateTransfer;
  this->m_DmaAcquiredContext = Context;
  v14 = v13->StartTransfer(this);
  if ( v14 < 0 )
  {
    v15 = this->m_EncodedRequest;
    *p_m_State = FxDmaTransactionStateTransferFailed;
    this->m_DmaAcquiredContext = 0LL;
    if ( v15 )
    {
      v16 = (FxRequest *)((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v16;
      FxRequest::ReleaseIrpReference(v16);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        303,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp");
    }
  }
  return (unsigned int)v14;
}
