/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C005B3C0
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C0057FB0 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C002A0D8 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C005B110 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C005C68C (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     WPP_IFR_SF_qld @ 0x1C005D158 (WPP_IFR_SF_qld.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C005DEA0 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0069F18 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
  FxDmaTransactionState globals; // ecx
  const void *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned int *p_m_MapRegistersReserved; // r15
  unsigned __int64 v17; // rbx
  FxDmaEnabler *m_DmaEnabler; // rcx
  $4E78FAD6283A805B24C30083E98044BF *v19; // rax
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
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x23u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
    v7 = 0LL;
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
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qld(
      m_Globals,
      0,
      (unsigned int)WPP_FxDmaTransaction_cpp_Traceguids,
      0x24u,
      WPP_FxDmaTransaction_cpp_Traceguids,
      v14,
      globals,
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
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x26u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
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
        LOBYTE(v7) = 1;
        FxDmaTransactionBase::ReleaseForReuse(this, (__int64)v7);
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
        303,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransaction.hpp");
    }
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x27u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, v22);
  return (unsigned int)v22;
}
