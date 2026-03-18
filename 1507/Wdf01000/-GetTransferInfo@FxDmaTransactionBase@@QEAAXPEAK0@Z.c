/*
 * XREFs of ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x1C0061488
 * Callers:
 *     imp_WdfDmaTransactionGetTransferInfo @ 0x1C005EAA0 (imp_WdfDmaTransactionGetTransferInfo.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxDmaTransactionBase::GetTransferInfo(
        FxDmaTransactionBase *this,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState _a2; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  ULONG_PTR v10; // rbx
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned __int64 m_StartOffset; // r10
  unsigned __int64 m_TransactionLength; // r11
  _MDL *m_StartMdl; // rdx
  unsigned __int64 ByteCount; // r9
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _DMA_TRANSFER_INFO info; // [rsp+40h] [rbp-18h] BYREF

  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( _a2 != FxDmaTransactionStateInitialized )
  {
    m_Globals = this->m_Globals;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x3Bu, WPP_FxDmaTransaction_cpp_Traceguids, _a1, _a2);
    if ( this->m_ObjectSize )
      v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v10 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v10, *(int *)p_m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  *(_QWORD *)&info.V1.MapRegisterCount = 0LL;
  info.Version = 0;
  info.V1.ScatterGatherListSize = 0;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo(
      this->m_AdapterInfo->AdapterObject,
      this->m_StartMdl,
      this->m_StartOffset,
      this->m_TransactionLength,
      this->m_DmaDirection == WdfDmaDirectionWriteToDevice,
      &info);
    v12 = info.V1.ScatterGatherElementCount;
    v13 = info.V1.MapRegisterCount;
  }
  else
  {
    m_StartOffset = this->m_StartOffset;
    m_TransactionLength = this->m_TransactionLength;
    m_StartMdl = this->m_StartMdl;
    v13 = info.V1.MapRegisterCount;
    while ( m_StartMdl && m_TransactionLength )
    {
      ByteCount = m_StartMdl->ByteCount;
      if ( ByteCount > m_StartOffset )
      {
        v18 = ByteCount - m_StartOffset;
        v19 = m_TransactionLength;
        if ( v18 < m_TransactionLength )
          v19 = v18;
        v13 += ((((_DWORD)m_StartOffset + LODWORD(m_StartMdl->StartVa) + m_StartMdl->ByteOffset) & 0xFFF) + v19 + 4095) >> 12;
        v20 = m_TransactionLength;
        info.V1.MapRegisterCount = v13;
        if ( v18 < m_TransactionLength )
          v20 = v18;
        m_TransactionLength -= v20;
      }
      else
      {
        m_StartOffset -= ByteCount;
      }
      m_StartMdl = m_StartMdl->Next;
    }
    v12 = v13;
  }
  if ( MapRegisterCount )
    *MapRegisterCount = v13;
  if ( ScatterGatherElementCount )
    *ScatterGatherElementCount = v12;
}
