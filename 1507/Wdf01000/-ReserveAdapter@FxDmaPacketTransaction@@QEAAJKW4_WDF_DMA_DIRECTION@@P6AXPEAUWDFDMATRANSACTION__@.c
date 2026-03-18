/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0061F90
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C005DFD0 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0061CE0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006354C (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     WPP_IFR_SF_qld @ 0x1C0064160 (WPP_IFR_SF_qld.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C0064F00 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0075380 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxDmaPacketTransaction::ReserveAdapter(
        FxDmaPacketTransaction *this,
        unsigned int NumberOfMapRegisters,
        _WDF_DMA_DIRECTION DmaDirection,
        void (__fastcall *Callback)(WDFDMATRANSACTION__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 v7; // rdx
  const void *_a1; // rbp
  const _GUID *v12; // r8
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState globals; // ecx
  const void *v15; // rax
  ULONG_PTR v16; // rbx
  unsigned int *p_m_MapRegistersReserved; // r15
  ULONG_PTR v18; // rbx
  FxDmaEnabler *m_DmaEnabler; // rcx
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rax
  FxDmaEnabler *v21; // rcx
  int v22; // esi
  FxDmaPacketTransaction_vtbl *v23; // rax
  _FxDmaDescription *m_AdapterInfo; // rax
  int v25; // eax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v27; // rcx
  ULONG_PTR v29; // rbx

  m_Globals = this->m_Globals;
  v7 = 0LL;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  v12 = WPP_FxDmaTransaction_cpp_Traceguids;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x23u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
    v7 = 0LL;
    v12 = WPP_FxDmaTransaction_cpp_Traceguids;
  }
  p_m_State = &this->m_State;
  globals = this->m_State;
  if ( NumberOfMapRegisters )
  {
    if ( ((globals - 1) & 0xFFFFFFF9) != 0 || globals == FxDmaTransactionStateTransferCompleted )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x25u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, globals);
      if ( this->m_ObjectSize )
        v29 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v29 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v29, *(int *)p_m_State);
    }
  }
  else if ( globals != FxDmaTransactionStateInitialized )
  {
    if ( this->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    WPP_IFR_SF_qld(
      m_Globals,
      0,
      (unsigned int)WPP_FxDmaTransaction_cpp_Traceguids,
      0x24u,
      WPP_FxDmaTransaction_cpp_Traceguids,
      v15,
      globals,
      -1073741811);
    if ( this->m_ObjectSize )
      v16 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v16 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v16, *(int *)p_m_State);
  }
  p_m_MapRegistersReserved = &this->m_MapRegistersReserved;
  if ( this->m_MapRegistersReserved )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x26u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
    if ( this->m_ObjectSize )
      v18 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v18 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v18, *(int *)p_m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection == WdfDmaDirectionReadFromDevice
    || (p_m_SimplexAdapterInfo = &m_DmaEnabler->m_DuplexAdapterInfo[1], (*((_BYTE *)m_DmaEnabler + 380) & 0x10) == 0) )
  {
    p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  }
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
      v25 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              this->m_StartMdl,
              this->m_StartOffset,
              this->m_TransactionLength,
              m_AdapterInfo->NumberOfMapRegisters,
              0LL,
              &this->m_MapRegistersReserved);
      v7 = 0LL;
      v22 = v25;
      if ( v25 < 0 )
      {
LABEL_35:
        LOBYTE(v7) = 1;
        FxDmaTransactionBase::ReleaseForReuse(this, v7);
        goto $End_2;
      }
    }
    else
    {
      *p_m_MapRegistersReserved = m_AdapterInfo->NumberOfMapRegisters;
    }
  }
  v21 = this->m_DmaEnabler;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_Remaining = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_DmaAcquiredFunction.Method.ProgramDma = (unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *))Callback;
  this->m_DmaAcquiredContext = Context;
  if ( v21->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v21, this->m_TransferContext, DmaDirection);
  v22 = ((__int64 (__fastcall *)(FxDmaPacketTransaction *, __int64, const _GUID *))this->InitializeResources)(
          this,
          v7,
          v12);
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
        303,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp");
    }
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x27u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, v22);
  return (unsigned int)v22;
}
