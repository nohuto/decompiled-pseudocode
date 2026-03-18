/*
 * XREFs of ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C0060D1C
 * Callers:
 *     imp_WdfDmaTransactionDmaCompleted @ 0x1C005E440 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x1C005E4F0 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompletedWithLength @ 0x1C005E5B0 (imp_WdfDmaTransactionDmaCompletedWithLength.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qc @ 0x1C0063F2C (WPP_IFR_SF_qc.c)
 *     WPP_IFR_SF_qiid @ 0x1C0063FF0 (WPP_IFR_SF_qiid.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0075380 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

char __fastcall FxDmaTransactionBase::DmaCompleted(
        FxDmaTransactionBase *this,
        unsigned __int64 TransferredLength,
        int *ReturnStatus,
        FxDmaCompletionType CompletionType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rbp
  unsigned __int64 _a3; // rcx
  char v11; // r15
  int v12; // esi
  const void *v13; // rax
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  unsigned __int16 v16; // r9
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v18; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xFu, WPP_FxDmaTransaction_cpp_Traceguids, _a1, TransferredLength);
  if ( this->m_State != FxDmaTransactionStateTransfer )
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x10u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, this->m_State);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, (ULONG_PTR)_a1, this->m_State);
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
      0x11u,
      WPP_FxDmaTransaction_cpp_Traceguids,
      _a1,
      TransferredLength,
      _a3,
      -1073741811);
    v21 = 7567731;
    traceGuid = (const _GUID *)&v21;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
LABEL_12:
    this->m_State = FxDmaTransactionStateTransferFailed;
    goto LABEL_13;
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
  v12 = ((__int64 (__fastcall *)(FxDmaTransactionBase *, __int64, const _GUID *))this->TransferCompleted)(
          this,
          15LL,
          WPP_FxDmaTransaction_cpp_Traceguids);
  if ( v12 >= 0 )
  {
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
    goto LABEL_35;
  }
  if ( v12 < 0 )
    goto LABEL_12;
  this->m_State = FxDmaTransactionStateTransferCompleted;
LABEL_13:
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x12u, WPP_FxDmaTransaction_cpp_Traceguids, v13, v12);
  }
  this->ReleaseResources(this, 0);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    v18 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v18;
    FxRequest::ReleaseIrpReference(v18);
    ((void (__fastcall *)(FxRequest *, FxDmaTransactionBase *, __int64, const char *, const _GUID *))this->m_EncodedRequest->Release)(
      this->m_EncodedRequest,
      this,
      303LL,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp",
      traceGuid);
  }
  this->m_CurrentFragmentLength = 0LL;
LABEL_35:
  *ReturnStatus = v12;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qc(m_Globals, v14, v15, v16, traceGuid, _a1, v11);
  return v11;
}
