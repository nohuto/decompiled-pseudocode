/*
 * XREFs of ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C006DFF0
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C006CCA0 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C51C (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall FxDmaTransactionBase::Dispose(FxDmaTransactionBase *this, __int64 a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 v4; // rsi
  const void *v5; // rax
  FxDmaTransactionBase_vtbl *v6; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v8; // rcx

  m_Globals = this->m_Globals;
  if ( this->m_State == FxDmaTransactionStateTransfer )
  {
    v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v5 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionBase_cpp_Traceguids, v5, 4);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, a2, 9u) || m_Globals->FxVerifyDownlevel) )
    {
      if ( !this->m_ObjectSize )
        v4 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v4, this->m_State);
    }
  }
  v6 = this->__vftable;
  LOBYTE(a2) = 1;
  this->m_State = FxDmaTransactionStateDeleted;
  v6->ReleaseResources(this, a2);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
    {
      v8 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v8;
      FxRequest::ReleaseIrpReference(v8);
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
