/*
 * XREFs of ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C006A6A0
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C00693C0 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00650B0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C00786C4 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall FxDmaTransactionBase::Dispose(FxDmaTransactionBase *this, __int64 a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDmaTransactionState *p_m_State; // rsi
  const void *_a1; // rax
  unsigned __int64 v6; // rbx
  FxDmaTransactionBase_vtbl *v7; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v9; // rcx

  m_Globals = this->m_Globals;
  p_m_State = &this->m_State;
  if ( this->m_State == FxDmaTransactionStateTransfer )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, 4);
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, a2, 9u) || m_Globals->FxVerifyDownlevel )
      {
        if ( this->m_ObjectSize )
          v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v6 = 0LL;
        FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v6, *(int *)p_m_State);
      }
    }
  }
  v7 = this->__vftable;
  LOBYTE(a2) = 1;
  *p_m_State = FxDmaTransactionStateDeleted;
  v7->ReleaseResources(this, a2);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
    {
      v9 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v9;
      FxRequest::ReleaseIrpReference(v9);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
    this->m_EncodedRequest = 0LL;
  }
  return 1;
}
