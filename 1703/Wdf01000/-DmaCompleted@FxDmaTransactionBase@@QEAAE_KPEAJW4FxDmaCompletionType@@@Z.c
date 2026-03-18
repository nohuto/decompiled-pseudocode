/*
 * XREFs of ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C006E110
 * Callers:
 *     imp_WdfDmaTransactionDmaCompleted @ 0x1C0068E30 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x1C0068E90 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompletedWithLength @ 0x1C0068F00 (imp_WdfDmaTransactionDmaCompletedWithLength.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qPPd @ 0x1C006F244 (WPP_IFR_SF_qPPd.c)
 *     WPP_IFR_SF_qc @ 0x1C006F35C (WPP_IFR_SF_qc.c)
 *     WPP_IFR_SF_qiid @ 0x1C006F424 (WPP_IFR_SF_qiid.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C51C (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

char __fastcall FxDmaTransactionBase::DmaCompleted(
        FxDmaTransactionBase *this,
        unsigned __int64 TransferredLength,
        int *ReturnStatus,
        FxDmaCompletionType CompletionType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v6; // r12
  const void *_a1; // r15
  unsigned __int64 _a3; // rcx
  char v11; // r14
  int v12; // esi
  unsigned __int64 m_Remaining; // rdx
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v17; // rcx
  const void *v18; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int _a4; // [rsp+40h] [rbp-38h]

  m_Globals = this->m_Globals;
  v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x16u, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, TransferredLength);
  if ( this->m_State != FxDmaTransactionStateTransfer )
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x17u, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, this->m_State);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, (unsigned __int64)_a1, this->m_State);
  }
  _a3 = this->m_CurrentFragmentLength;
  v11 = 1;
  if ( TransferredLength > _a3 )
  {
    v12 = -1073741811;
    WPP_IFR_SF_qiid(
      m_Globals,
      2u,
      0xFu,
      0x18u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      _a1,
      TransferredLength,
      _a3,
      -1073741811);
    FxVerifierDbgBreakPoint(m_Globals);
LABEL_10:
    this->m_State = FxDmaTransactionStateTransferFailed;
    goto LABEL_11;
  }
  if ( (unsigned int)(CompletionType - 2) <= 1 )
  {
    this->m_Transferred += TransferredLength;
    this->m_Remaining += _a3 - TransferredLength;
    this->m_CurrentFragmentLength = TransferredLength;
  }
  else
  {
    this->m_Transferred += _a3;
  }
  v12 = ((__int64 (__fastcall *)(FxDmaTransactionBase *, const _GUID *))this->TransferCompleted)(
          this,
          WPP_FxDmaTransactionBase_cpp_Traceguids);
  if ( v12 >= 0 )
  {
    if ( this->m_RequireSingleTransfer )
    {
      m_Remaining = this->m_Remaining;
      if ( m_Remaining )
      {
        v12 = -1071644141;
        v18 = v6;
        if ( !this->m_ObjectSize )
          v18 = 0LL;
        WPP_IFR_SF_qPPd(m_Globals, m_Remaining, v14, 0x19u, traceGuid, v18, m_Remaining, this->m_TransactionLength, _a4);
        goto LABEL_10;
      }
    }
    if ( !this->m_Remaining || CompletionType == FxDmaCompletionTypeAbort )
    {
      v12 = 0;
    }
    else
    {
      v12 = this->StageTransfer(this);
      if ( v12 >= 0 )
        v12 = -1073741802;
    }
  }
  if ( v12 == -1073741802 )
  {
    v11 = 0;
    goto LABEL_37;
  }
  if ( v12 < 0 )
    goto LABEL_10;
  this->m_State = FxDmaTransactionStateTransferCompleted;
LABEL_11:
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionBase_cpp_Traceguids, v6, v12);
  }
  this->ReleaseResources(this, 0);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    v17 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v17;
    FxRequest::ReleaseIrpReference(v17);
    this->m_EncodedRequest->Release(
      this->m_EncodedRequest,
      this,
      302,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
  }
  this->m_CurrentFragmentLength = 0LL;
LABEL_37:
  *ReturnStatus = v12;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qc(m_Globals, m_Remaining, v14, v15, traceGuid, _a1, v11);
  return v11;
}
