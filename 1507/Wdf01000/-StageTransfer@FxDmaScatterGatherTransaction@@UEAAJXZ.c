/*
 * XREFs of ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0062AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C0060788 (-BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@.c)
 *     ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C0061348 (-GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@P.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006354C (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C0063600 (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 *     WPP_IFR_SF_qqdid @ 0x1C0064248 (WPP_IFR_SF_qqdid.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StageTransfer(FxDmaScatterGatherTransaction *this)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v4; // rsi
  const void *_a1; // rax
  unsigned __int64 *p_m_CurrentFragmentOffset; // rbp
  const void **p_m_CurrentFragmentMdl; // r15
  unsigned int *p_m_CurrentFragmentLength; // r14
  unsigned __int64 m_MaxFragmentLength; // rdx
  _MDL *m_CurrentFragmentMdl; // rcx
  _FxDmaDescription *m_AdapterInfo; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  FxDmaEnabler *m_DmaEnabler; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  _MDL *v18; // rdx
  int ScatterGatherList; // eax
  unsigned int v20; // ebp
  void (__fastcall *traceGuid)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *); // [rsp+20h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-30h]
  unsigned int mapRegistersRequired; // [rsp+80h] [rbp+8h] BYREF

  mapRegistersRequired = -1;
  m_ObjectSize = this->m_ObjectSize;
  m_Globals = this->m_Globals;
  if ( m_ObjectSize )
    v4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v4 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    if ( m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Cu, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
  }
  p_m_CurrentFragmentOffset = &this->m_CurrentFragmentOffset;
  p_m_CurrentFragmentMdl = (const void **)&this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = (unsigned int *)&this->m_CurrentFragmentLength;
  FxDmaTransactionBase::_ComputeNextTransferAddress(
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    &this->m_CurrentFragmentMdl,
    &this->m_CurrentFragmentOffset);
  m_MaxFragmentLength = this->m_MaxFragmentLength;
  m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
  if ( this->m_Remaining < m_MaxFragmentLength )
    m_MaxFragmentLength = this->m_Remaining;
  m_AdapterInfo = this->m_AdapterInfo;
  *(_QWORD *)p_m_CurrentFragmentLength = m_MaxFragmentLength;
  FxDmaTransactionBase::_CalculateRequiredMapRegisters(
    m_CurrentFragmentMdl,
    *p_m_CurrentFragmentOffset,
    m_MaxFragmentLength,
    m_AdapterInfo->NumberOfMapRegisters,
    (unsigned int *)&this->m_CurrentFragmentLength,
    &mapRegistersRequired);
  m_DmaEnabler = this->m_DmaEnabler;
  if ( mapRegistersRequired <= m_DmaEnabler->m_MaxSGElements )
  {
    v16 = *(_QWORD *)p_m_CurrentFragmentLength;
    this->m_Remaining -= *(_QWORD *)p_m_CurrentFragmentLength;
    v17 = *p_m_CurrentFragmentOffset;
    v18 = (_MDL *)*p_m_CurrentFragmentMdl;
    if ( (*((_BYTE *)m_DmaEnabler + 380) & 0x20) != 0 )
      ScatterGatherList = FxDmaScatterGatherTransaction::BuildScatterGatherList(
                            this,
                            v18,
                            v17,
                            *p_m_CurrentFragmentLength,
                            traceGuid,
                            this,
                            this->m_LookasideBuffer,
                            this->m_AdapterInfo->PreallocatedSGListSize);
    else
      ScatterGatherList = FxDmaScatterGatherTransaction::GetScatterGatherList(this, v18, v17, v16, traceGuid, this);
    v20 = ScatterGatherList;
    if ( ScatterGatherList >= 0 )
    {
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x1Fu, WPP_FxDmaTransaction_cpp_Traceguids, v4, ScatterGatherList);
      }
    }
    else
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransaction_cpp_Traceguids, v4, ScatterGatherList);
      this->m_Remaining += *(_QWORD *)p_m_CurrentFragmentLength;
    }
    return v20;
  }
  else
  {
    WPP_IFR_SF_qqdid(
      m_Globals,
      v12,
      v13,
      0x1Du,
      (const _GUID *)traceGuid,
      v4,
      *p_m_CurrentFragmentMdl,
      mapRegistersRequired,
      m_DmaEnabler->m_MaxSGElements,
      v22);
    return 3223323146LL;
  }
}
