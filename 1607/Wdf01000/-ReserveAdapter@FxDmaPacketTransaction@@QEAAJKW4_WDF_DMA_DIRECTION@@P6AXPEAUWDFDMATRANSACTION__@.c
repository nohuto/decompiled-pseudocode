/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00678FC
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C0065450 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C0030208 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     WPP_IFR_SF_ql @ 0x1C00650B0 (WPP_IFR_SF_ql.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C0066BAC (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qld @ 0x1C0067108 (WPP_IFR_SF_qld.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006B330 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006B558 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C00786C4 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::ReserveAdapter(
        FxDmaPacketTransaction *this,
        unsigned int NumberOfMapRegisters,
        _WDF_DMA_DIRECTION DmaDirection,
        void (__fastcall *Callback)(WDFDMATRANSACTION__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int *v7; // rdx
  const void *_a1; // rbp
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState m_State; // ecx
  const void *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned int *p_m_MapRegistersReserved; // r15
  unsigned __int64 v17; // rbx
  FxDmaEnabler *m_DmaEnabler; // rcx
  $573AD7123BB726F3889E56BBEE799ACF *v19; // rax
  FxDmaEnabler *v20; // rcx
  FxDmaEnabler *v21; // rcx
  int v22; // esi
  FxDmaPacketTransaction_vtbl *v23; // rax
  _FxDmaDescription *m_AdapterInfo; // rax
  int v25; // eax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v27; // rcx
  unsigned __int64 v29; // rbx

  m_Globals = this->m_Globals;
  v7 = 0LL;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
    v7 = 0LL;
  }
  p_m_State = &this->m_State;
  m_State = this->m_State;
  if ( NumberOfMapRegisters )
  {
    if ( ((m_State - 1) & 0xFFFFFFF9) != 0 || m_State == FxDmaTransactionStateTransferCompleted )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, m_State);
      if ( this->m_ObjectSize )
        v29 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v29 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v29, *(int *)p_m_State);
    }
  }
  else if ( m_State != FxDmaTransactionStateInitialized )
  {
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qld(
      m_Globals,
      0,
      (unsigned int)WPP_FxDmaTransactionPacket_cpp_Traceguids,
      0xCu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      v14,
      m_State,
      -1073741811);
    if ( this->m_ObjectSize )
      v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v15, *(int *)p_m_State);
  }
  p_m_MapRegistersReserved = &this->m_MapRegistersReserved;
  if ( this->m_MapRegistersReserved )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
    if ( this->m_ObjectSize )
      v17 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v17 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v17, *(int *)p_m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    v19 = FxDmaEnabler::GetWriteDmaDescription(m_DmaEnabler);
  else
    v19 = &m_DmaEnabler->184;
  this->m_AdapterInfo = &v19->m_SimplexAdapterInfo;
  if ( NumberOfMapRegisters )
  {
    *p_m_MapRegistersReserved = NumberOfMapRegisters;
  }
  else
  {
    m_AdapterInfo = this->m_AdapterInfo;
    if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
    {
      v25 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              this->m_StartMdl,
              this->m_StartOffset,
              this->m_TransactionLength,
              m_AdapterInfo->NumberOfMapRegisters,
              v7,
              &this->m_MapRegistersReserved);
      v7 = 0LL;
      v22 = v25;
      if ( v25 < 0 )
      {
LABEL_35:
        FxDmaTransactionBase::ReleaseForReuse(this, 1u);
        goto $End_2;
      }
    }
    else
    {
      *p_m_MapRegistersReserved = m_AdapterInfo->NumberOfMapRegisters;
    }
  }
  v20 = this->m_DmaEnabler;
  this->m_StartMdl = (_MDL *)v7;
  this->m_StartOffset = (unsigned __int64)v7;
  this->m_CurrentFragmentMdl = (_MDL *)v7;
  this->m_CurrentFragmentOffset = (unsigned __int64)v7;
  this->m_Remaining = (unsigned __int64)v7;
  this->m_TransactionLength = (unsigned __int64)v7;
  this->m_DmaAcquiredContext = Context;
  this->m_DmaDirection = DmaDirection;
  this->m_DmaAcquiredFunction.Method.ProgramDma = (unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *))Callback;
  if ( FxDmaEnabler::GetDmaDescription(v20, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v21, this->m_TransferContext, DmaDirection);
  v22 = this->InitializeResources(this);
  if ( v22 < 0 )
    goto LABEL_35;
  v23 = this->__vftable;
  *p_m_State = FxDmaTransactionStateReserved;
  v22 = v23->StartTransfer(this);
$End_2:
  if ( v22 < 0 )
  {
    m_EncodedRequest = this->m_EncodedRequest;
    *p_m_State = FxDmaTransactionStateTransferFailed;
    this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
    this->m_DmaAcquiredContext = 0LL;
    *p_m_MapRegistersReserved = 0;
    if ( m_EncodedRequest )
    {
      v27 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v27;
      FxRequest::ReleaseIrpReference(v27);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xFu, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, v22);
  return (unsigned int)v22;
}
