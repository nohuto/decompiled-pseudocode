/*
 * XREFs of ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C006E928
 * Callers:
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006E6E4 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLd @ 0x1C002FA34 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C006A540 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qDPq @ 0x1C006EFFC (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x1C006F108 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qPPd @ 0x1C006F244 (WPP_IFR_SF_qPPd.c)
 */

__int64 __fastcall FxDmaTransactionBase::PrepareForSingleTransfer(
        FxDmaTransactionBase *this,
        __int64 a2,
        unsigned int a3)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r12
  unsigned __int64 m_TransactionLength; // rcx
  _FX_DRIVER_GLOBALS *v6; // rsi
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // rbx
  int _a2; // eax
  unsigned int v12; // r15d
  unsigned __int16 v13; // cx
  const void *_a1; // rbx
  unsigned int v15; // r8d
  _FxDmaDescription *m_AdapterInfo; // rcx
  unsigned __int16 v17; // ax
  const void *v18; // rbx
  unsigned int _a4; // ecx
  unsigned int v20; // edi
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int m_MaxSGElements; // edx
  unsigned __int16 v23; // ax
  const void *v24; // rbx
  unsigned __int16 v25; // ax
  const void *v26; // rbx
  PVOID PoolWithTag; // rsi
  unsigned int v28; // r8d
  unsigned __int16 v29; // r9
  FxDmaEnabler *v30; // r8
  unsigned __int16 v31; // ax
  const void *v32; // rbx
  const void *v33; // rdx
  FxDmaEnabler *v34; // r9
  const void *v35; // rdx
  const void *v36; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int globals; // [rsp+40h] [rbp-48h]
  int v39; // [rsp+48h] [rbp-40h]
  unsigned int info_4; // [rsp+54h] [rbp-34h]
  unsigned int info_8; // [rsp+58h] [rbp-30h]
  unsigned int info_12; // [rsp+5Ch] [rbp-2Ch]

  p_m_Globals = &this->m_Globals;
  m_TransactionLength = this->m_TransactionLength;
  v6 = *p_m_Globals;
  m_MaxFragmentLength = this->m_MaxFragmentLength;
  if ( m_TransactionLength > m_MaxFragmentLength )
  {
    m_ObjectSize = this->m_ObjectSize;
    v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qPPd(v6, m_MaxFragmentLength, a3, 0xEu, traceGuid, v9, m_TransactionLength, m_MaxFragmentLength, globals);
    return 3223323155LL;
  }
  LOBYTE(traceGuid) = this->m_DmaDirection == WdfDmaDirectionWriteToDevice;
  _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, unsigned __int64, _QWORD))this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo)(
          this->m_AdapterInfo->AdapterObject,
          this->m_StartMdl,
          this->m_StartOffset,
          LODWORD(this->m_TransactionLength));
  v12 = _a2;
  if ( _a2 < 0 )
  {
    v13 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v13 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(v6, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    return v12;
  }
  if ( info_4 > this->GetNumberOfAvailableMapRegisters(this) )
  {
    m_AdapterInfo = this->m_AdapterInfo;
    v17 = this->m_ObjectSize;
    v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a4 = m_AdapterInfo->NumberOfMapRegisters;
    if ( !v17 )
      v18 = 0LL;
    v20 = -1071644140;
    WPP_IFR_SF_qLLd(v6, 2u, v15, 0x10u, WPP_FxDmaTransactionBase_cpp_Traceguids, v18, info_4, _a4, -1071644140);
    return v20;
  }
  m_DmaEnabler = this->m_DmaEnabler;
  m_MaxSGElements = m_DmaEnabler->m_MaxSGElements;
  if ( info_8 > m_MaxSGElements )
  {
    v23 = this->m_ObjectSize;
    v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23 )
      v24 = 0LL;
    v20 = -1071644150;
    WPP_IFR_SF_qLLd(
      v6,
      2u,
      v15,
      0x11u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v24,
      info_8,
      m_MaxSGElements,
      -1071644150);
    return v20;
  }
  if ( ((m_DmaEnabler->m_Profile - 1) & 0xFFFFFFFD) == 0 && info_8 > 1 )
  {
    v25 = this->m_ObjectSize;
    v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v25 )
      v26 = 0LL;
    v20 = -1071644150;
    WPP_IFR_SF_qLd(v6, m_MaxSGElements, 0xFu, 0x12u, WPP_FxDmaTransactionBase_cpp_Traceguids, v26, info_8, -1071644150);
    return v20;
  }
  if ( (*((_BYTE *)m_DmaEnabler + 380) & 0x20) == 0 || info_12 <= this->GetSgListBufferSize(this) )
    return v12;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, info_12, v6->Tag);
  if ( PoolWithTag )
  {
    v34 = this->m_DmaEnabler;
    v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v35 = 0LL;
    v36 = (const void *)((unsigned __int64)this->m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v34->m_ObjectSize )
      v36 = 0LL;
    WPP_IFR_SF_qDPq(
      *p_m_Globals,
      (unsigned __int8)v35,
      v28,
      (unsigned __int16)v34,
      traceGuid,
      v36,
      info_12,
      v34->m_SGListSize,
      v35);
    this->SetNewSgListBuffer(this, PoolWithTag, info_12);
    return v12;
  }
  v30 = this->m_DmaEnabler;
  v31 = this->m_ObjectSize;
  v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v31 )
    v32 = 0LL;
  v33 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v30->m_ObjectSize )
    v33 = 0LL;
  WPP_IFR_SF_qDPqd(
    *p_m_Globals,
    (unsigned __int8)v33,
    (unsigned int)v30,
    v29,
    traceGuid,
    v33,
    info_12,
    v30->m_SGListSize,
    v32,
    v39);
  return 3221225626LL;
}
