/*
 * XREFs of ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006B330
 * Callers:
 *     imp_WdfDmaTransactionRelease @ 0x1C0065FF0 (imp_WdfDmaTransactionRelease.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C0067774 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00678FC (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006ADD0 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x1C003C8E0 (-Reset@FxDmaTransactionBase@@AEAAXXZ.c)
 *     WPP_IFR_SF_ql @ 0x1C00650B0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C00786C4 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaTransactionBase::ReleaseForReuse(FxDmaTransactionBase *this, __int64 ForceRelease)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v3; // bp
  FxDmaTransactionState *p_m_State; // rsi
  FxDmaTransactionState m_State; // eax
  const void *_a1; // rbx
  const void *v8; // rax
  unsigned __int64 v9; // rbx
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
      WPP_IFR_SF_qd(m_Globals, 3u, 0xFu, 0x1Cu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, 0);
      return;
    }
    if ( m_State == FxDmaTransactionStateTransfer )
    {
      v8 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Du, WPP_FxDmaTransactionBase_cpp_Traceguids, v8, 4);
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
  FxDmaTransactionBase::Reset(this);
  m_EncodedRequest = this->m_EncodedRequest;
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
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
    this->m_EncodedRequest = 0LL;
  }
}
