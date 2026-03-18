/*
 * XREFs of ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0061CE0
 * Callers:
 *     imp_WdfDmaTransactionRelease @ 0x1C005F220 (imp_WdfDmaTransactionRelease.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0061630 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C0061BC8 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0061F90 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0075380 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

void __fastcall FxDmaTransactionBase::ReleaseForReuse(FxDmaTransactionBase *this, __int64 ForceRelease)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v3; // bp
  FxDmaTransactionState *p_m_State; // rsi
  FxDmaTransactionState m_State; // eax
  const void *_a1; // rbx
  const void *v8; // rax
  ULONG_PTR v9; // rbx
  FxDmaTransactionBase_vtbl *v10; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v12; // rcx

  m_Globals = this->m_Globals;
  v3 = ForceRelease;
  if ( !(_BYTE)ForceRelease )
  {
    p_m_State = &this->m_State;
    m_State = this->m_State;
    if ( m_State == FxDmaTransactionStateReleased )
    {
      if ( this->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 3u, 0xFu, 0x14u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, 0);
      return;
    }
    if ( m_State == FxDmaTransactionStateTransfer )
    {
      v8 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaTransaction_cpp_Traceguids, v8, 4);
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, ForceRelease, 0xBu)
          || m_Globals->FxVerifyDownlevel )
        {
          if ( this->m_ObjectSize )
            v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v9 = 0LL;
          FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v9, *(int *)p_m_State);
        }
      }
    }
  }
  v10 = this->__vftable;
  LOBYTE(ForceRelease) = v3;
  this->m_State = FxDmaTransactionStateReleased;
  v10->ReleaseResources(this, ForceRelease);
  m_EncodedRequest = this->m_EncodedRequest;
  this->m_DmaAcquiredContext = 0LL;
  if ( m_EncodedRequest )
  {
    if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
    {
      v12 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v12;
      FxRequest::ReleaseIrpReference(v12);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        303,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp");
    }
    this->m_EncodedRequest = 0LL;
  }
  this->m_StartMdl = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_CurrentFragmentLength = 0LL;
  this->m_Transferred = 0LL;
  this->m_Remaining = 0LL;
  this->m_MaxFragmentLength = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_Flags = 0;
  this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
}
