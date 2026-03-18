/*
 * XREFs of ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C005ACF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C005C68C (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C005C740 (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 *     WPP_IFR_SF_qqdid @ 0x1C005D240 (WPP_IFR_SF_qqdid.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::InitializeResources(FxDmaScatterGatherTransaction *this)
{
  unsigned __int64 m_TransactionLength; // rbp
  const void *v2; // rdi
  _MDL *globals; // r15
  unsigned __int64 m_StartOffset; // r13
  unsigned int v6; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 m_MaxFragmentLength; // r12
  int v9; // eax
  FxDmaEnabler *m_DmaEnabler; // rcx
  const void *v12; // rbx
  unsigned __int64 *NextOffset; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+48h] [rbp-50h]
  unsigned int mapRegistersRequired; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 nextOffset; // [rsp+A8h] [rbp+10h] BYREF
  _MDL *nextMdl; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 possibleLength; // [rsp+B8h] [rbp+20h] BYREF

  m_TransactionLength = this->m_TransactionLength;
  v2 = 0LL;
  globals = this->m_StartMdl;
  m_StartOffset = this->m_StartOffset;
  v6 = 0;
  m_Globals = this->m_Globals;
  LODWORD(m_MaxFragmentLength) = 0;
  nextMdl = globals;
  nextOffset = m_StartOffset;
  if ( m_TransactionLength )
  {
    while ( 1 )
    {
      FxDmaTransactionBase::_ComputeNextTransferAddress(
        globals,
        m_StartOffset,
        m_MaxFragmentLength,
        &nextMdl,
        &nextOffset);
      m_MaxFragmentLength = this->m_MaxFragmentLength;
      m_StartOffset = nextOffset;
      globals = nextMdl;
      if ( m_TransactionLength < m_MaxFragmentLength )
        m_MaxFragmentLength = m_TransactionLength;
      v9 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
             nextMdl,
             nextOffset,
             m_MaxFragmentLength,
             this->m_AdapterInfo->NumberOfMapRegisters,
             (unsigned int *)&possibleLength,
             &mapRegistersRequired);
      v6 = v9;
      if ( v9 < 0 )
        break;
      m_DmaEnabler = this->m_DmaEnabler;
      if ( mapRegistersRequired > m_DmaEnabler->m_MaxSGElements )
      {
        if ( this->m_ObjectSize )
          v2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqdid(
          m_Globals,
          m_DmaEnabler->m_MaxSGElements,
          mapRegistersRequired,
          0x1Bu,
          (const _GUID *)NextOffset,
          v2,
          globals,
          mapRegistersRequired,
          m_DmaEnabler->m_MaxSGElements,
          v14);
        return 3223323146LL;
      }
      m_TransactionLength -= m_MaxFragmentLength;
      if ( !m_TransactionLength )
        return v6;
    }
    if ( this->m_ObjectSize )
      v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransaction_cpp_Traceguids, v12, v9);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return v6;
}
