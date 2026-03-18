/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C006B180
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C0068B60 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00360A0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C006A3A0 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qld @ 0x1C006A944 (WPP_IFR_SF_qld.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006EC54 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006EEF8 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C51C (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::ReserveAdapter(
        FxDmaPacketTransaction *this,
        unsigned int NumberOfMapRegisters,
        _WDF_DMA_DIRECTION DmaDirection,
        void (__fastcall *Callback)(WDFDMATRANSACTION__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 v6; // rdi
  const void *v8; // r12
  FxDmaTransactionState m_State; // ecx
  const void *_a3; // rax
  unsigned int *p_m_MapRegistersReserved; // r14
  FxDmaEnabler *m_DmaEnabler; // rdx
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rax
  FxDmaEnabler *v17; // rcx
  FxDmaEnabler *v18; // rcx
  int v19; // edi
  FxDmaPacketTransaction_vtbl *v20; // rax
  _FxDmaDescription *m_AdapterInfo; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v23; // rcx

  m_Globals = this->m_Globals;
  v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v8 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8);
  m_State = this->m_State;
  if ( NumberOfMapRegisters )
  {
    if ( ((m_State - 1) & 0xFFFFFFF9) != 0 || m_State == FxDmaTransactionStateTransferCompleted )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8, m_State);
      if ( !this->m_ObjectSize )
        v6 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v6, this->m_State);
    }
  }
  else if ( m_State != FxDmaTransactionStateInitialized )
  {
    _a3 = (const void *)v6;
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qld(
      m_Globals,
      (unsigned __int8)WPP_FxDmaTransactionPacket_cpp_Traceguids,
      0,
      0xCu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      _a3,
      m_State,
      -1073741811);
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v6, this->m_State);
  }
  p_m_MapRegistersReserved = &this->m_MapRegistersReserved;
  if ( this->m_MapRegistersReserved )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8);
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v6, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    p_m_SimplexAdapterInfo = (_FxDmaDescription *)((char *)&m_DmaEnabler->m_SimplexAdapterInfo
                                                 + ((*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 0x60 : 0));
  else
    p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  this->m_AdapterInfo = p_m_SimplexAdapterInfo;
  if ( NumberOfMapRegisters )
  {
    *p_m_MapRegistersReserved = NumberOfMapRegisters;
  }
  else
  {
    m_AdapterInfo = this->m_AdapterInfo;
    if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
    {
      v19 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              this->m_StartMdl,
              this->m_StartOffset,
              this->m_TransactionLength,
              m_AdapterInfo->NumberOfMapRegisters,
              0LL,
              &this->m_MapRegistersReserved);
      if ( v19 < 0 )
      {
LABEL_31:
        FxDmaTransactionBase::ReleaseForReuse(this, 1u);
        goto $End_2;
      }
    }
    else
    {
      *p_m_MapRegistersReserved = m_AdapterInfo->NumberOfMapRegisters;
    }
  }
  v17 = this->m_DmaEnabler;
  this->m_DmaAcquiredContext = Context;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_Remaining = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_DmaAcquiredFunction.Method.ProgramDma = (unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *))Callback;
  if ( FxDmaEnabler::GetDmaDescription(v17, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v18, this->m_TransferContext, DmaDirection);
  v19 = this->InitializeResources(this);
  if ( v19 < 0 )
    goto LABEL_31;
  v20 = this->__vftable;
  this->m_State = FxDmaTransactionStateReserved;
  v19 = v20->StartTransfer(this);
$End_2:
  if ( v19 < 0 )
  {
    m_EncodedRequest = this->m_EncodedRequest;
    this->m_State = FxDmaTransactionStateTransferFailed;
    this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
    this->m_DmaAcquiredContext = 0LL;
    *p_m_MapRegistersReserved = 0;
    if ( m_EncodedRequest )
    {
      v23 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v23;
      FxRequest::ReleaseIrpReference(v23);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xFu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8, v19);
  return (unsigned int)v19;
}
