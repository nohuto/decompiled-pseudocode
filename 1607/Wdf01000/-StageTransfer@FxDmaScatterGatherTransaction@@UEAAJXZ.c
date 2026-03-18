/*
 * XREFs of ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0069820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C006922C (-BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@.c)
 *     ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C0069478 (-GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@P.c)
 *     WPP_IFR_SF_qqdid @ 0x1C0069D30 (WPP_IFR_SF_qqdid.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006B558 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C006B60C (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StageTransfer(FxDmaScatterGatherTransaction *this)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v4; // rsi
  const void *_a1; // rax
  unsigned __int64 *p_m_CurrentFragmentOffset; // rbp
  const void **p_m_CurrentFragmentMdl; // r15
  unsigned __int64 *p_m_CurrentFragmentLength; // r14
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned int v10; // r8d
  __int64 flags; // rcx
  unsigned int v13; // r9d
  unsigned __int64 v14; // r8
  _MDL *v15; // rdx
  int ScatterGatherList; // eax
  unsigned int v17; // ebp
  void (__fastcall *traceGuid)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *); // [rsp+20h] [rbp-58h]
  int v19; // [rsp+48h] [rbp-30h]
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
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xEu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, _a1);
  }
  p_m_CurrentFragmentOffset = &this->m_CurrentFragmentOffset;
  p_m_CurrentFragmentMdl = (const void **)&this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = &this->m_CurrentFragmentLength;
  FxDmaTransactionBase::_ComputeNextTransferAddress(
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    &this->m_CurrentFragmentMdl,
    &this->m_CurrentFragmentOffset);
  m_MaxFragmentLength = this->m_MaxFragmentLength;
  if ( this->m_Remaining < m_MaxFragmentLength )
    m_MaxFragmentLength = this->m_Remaining;
  *p_m_CurrentFragmentLength = m_MaxFragmentLength;
  if ( this->m_RequireSingleTransfer
    || (FxDmaTransactionBase::_CalculateRequiredMapRegisters(
          (_MDL *)*p_m_CurrentFragmentMdl,
          *p_m_CurrentFragmentOffset,
          m_MaxFragmentLength,
          this->m_AdapterInfo->NumberOfMapRegisters,
          (unsigned int *)&this->m_CurrentFragmentLength,
          &mapRegistersRequired),
        flags = this->m_DmaEnabler->m_MaxSGElements,
        mapRegistersRequired <= (unsigned int)flags) )
  {
    this->m_Remaining -= *p_m_CurrentFragmentLength;
    v13 = *(_DWORD *)p_m_CurrentFragmentLength;
    v14 = *p_m_CurrentFragmentOffset;
    v15 = (_MDL *)*p_m_CurrentFragmentMdl;
    if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
      ScatterGatherList = FxDmaScatterGatherTransaction::BuildScatterGatherList(
                            this,
                            v15,
                            v14,
                            v13,
                            traceGuid,
                            this,
                            this->m_SGListBuffer,
                            this->m_SgListBufferSize);
    else
      ScatterGatherList = FxDmaScatterGatherTransaction::GetScatterGatherList(this, v15, v14, v13, traceGuid, this);
    v17 = ScatterGatherList;
    if ( ScatterGatherList >= 0 )
    {
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(
            m_Globals,
            5u,
            0xFu,
            0x11u,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            v4,
            ScatterGatherList);
      }
    }
    else
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x10u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v4, ScatterGatherList);
      this->m_Remaining += *p_m_CurrentFragmentLength;
    }
    return v17;
  }
  else
  {
    WPP_IFR_SF_qqdid(
      m_Globals,
      mapRegistersRequired,
      v10,
      0xFu,
      (const _GUID *)traceGuid,
      v4,
      *p_m_CurrentFragmentMdl,
      mapRegistersRequired,
      flags,
      v19);
    return 3223323146LL;
  }
}
