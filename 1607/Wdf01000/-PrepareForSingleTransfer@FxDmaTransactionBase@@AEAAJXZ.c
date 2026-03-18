/*
 * XREFs of ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C006B004
 * Callers:
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006ADD0 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLd @ 0x1C002E0B8 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0066D1C (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qDPq @ 0x1C006B64C (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x1C006B750 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qPPd @ 0x1C006B884 (WPP_IFR_SF_qPPd.c)
 */

__int64 __fastcall FxDmaTransactionBase::PrepareForSingleTransfer(
        FxDmaTransactionBase *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  unsigned __int64 level; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 flags; // rcx
  const void *globals; // rbx
  int v10; // eax
  const void *v11; // rdi
  unsigned int v12; // r12d
  const void *v13; // rbx
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  const void *v16; // rbx
  unsigned int v17; // edi
  FxDmaEnabler **p_m_DmaEnabler; // r15
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int m_MaxSGElements; // eax
  const void *v21; // rbx
  const void *v22; // rbx
  unsigned __int8 v23; // dl
  PVOID PoolWithTag; // rsi
  unsigned int v25; // r8d
  unsigned __int16 v26; // r9
  const void *v27; // rbx
  FxDmaEnabler *v28; // rax
  const void *v29; // rax
  FxDmaEnabler *v30; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int id; // [rsp+40h] [rbp-48h]
  int v33; // [rsp+48h] [rbp-40h]
  unsigned int info_4; // [rsp+54h] [rbp-34h]
  unsigned int info_8; // [rsp+58h] [rbp-30h]
  unsigned int info_12; // [rsp+5Ch] [rbp-2Ch]
  _FxDmaDescription **p_m_AdapterInfo; // [rsp+90h] [rbp+8h]

  level = this->m_TransactionLength;
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  flags = this->m_MaxFragmentLength;
  if ( level > flags )
  {
    if ( this->m_ObjectSize )
      globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    WPP_IFR_SF_qPPd(m_Globals, a2, a3, 0xEu, traceGuid, globals, level, flags, id);
    return 3223323155LL;
  }
  p_m_AdapterInfo = &this->m_AdapterInfo;
  LOBYTE(traceGuid) = this->m_DmaDirection == WdfDmaDirectionWriteToDevice;
  v10 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, unsigned __int64, _QWORD))this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo)(
          this->m_AdapterInfo->AdapterObject,
          this->m_StartMdl,
          this->m_StartOffset,
          LODWORD(this->m_TransactionLength));
  v11 = 0LL;
  v12 = v10;
  if ( v10 < 0 )
  {
    if ( this->m_ObjectSize )
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, v13, v10);
    return v12;
  }
  if ( info_4 > this->GetNumberOfAvailableMapRegisters(this) )
  {
    if ( this->m_ObjectSize )
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v16 = 0LL;
    v17 = -1071644140;
    WPP_IFR_SF_qLLd(
      m_Globals,
      2u,
      v15,
      0x10u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v16,
      info_4,
      (*p_m_AdapterInfo)->NumberOfMapRegisters,
      -1071644140);
    return v17;
  }
  p_m_DmaEnabler = &this->m_DmaEnabler;
  m_DmaEnabler = this->m_DmaEnabler;
  m_MaxSGElements = m_DmaEnabler->m_MaxSGElements;
  if ( info_8 > m_MaxSGElements )
  {
    if ( this->m_ObjectSize )
      v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v21 = 0LL;
    v17 = -1071644150;
    WPP_IFR_SF_qLLd(
      m_Globals,
      2u,
      v15,
      0x11u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v21,
      info_8,
      m_MaxSGElements,
      -1071644150);
    return v17;
  }
  if ( ((m_DmaEnabler->m_Profile - 1) & 0xFFFFFFFD) == 0 && info_8 > 1 )
  {
    if ( this->m_ObjectSize )
      v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    v17 = -1071644150;
    WPP_IFR_SF_qLd(m_Globals, v14, 0xFu, 0x12u, WPP_FxDmaTransactionBase_cpp_Traceguids, v22, info_8, -1071644150);
    return v17;
  }
  if ( (*((_BYTE *)m_DmaEnabler + 380) & 0x20) == 0 || info_12 <= this->GetSgListBufferSize(this) )
    return v12;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, info_12, m_Globals->Tag);
  if ( PoolWithTag )
  {
    if ( this->m_ObjectSize )
      v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v29 = 0LL;
    v30 = *p_m_DmaEnabler;
    if ( (*p_m_DmaEnabler)->m_ObjectSize )
      v11 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qDPq(*p_m_Globals, v23, v25, v26, traceGuid, v11, info_12, v30->m_SGListSize, v29);
    this->SetNewSgListBuffer(this, PoolWithTag, info_12);
    return v12;
  }
  if ( this->m_ObjectSize )
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v27 = 0LL;
  v28 = *p_m_DmaEnabler;
  if ( (*p_m_DmaEnabler)->m_ObjectSize )
    v11 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_qDPqd(*p_m_Globals, v23, v25, v26, traceGuid, v11, info_12, v28->m_SGListSize, v27, v33);
  return 3221225626LL;
}
