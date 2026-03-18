/*
 * XREFs of ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C00695C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqdid @ 0x1C0069D30 (WPP_IFR_SF_qqdid.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006B558 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C006B60C (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::InitializeResources(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  const void *v2; // rdi
  unsigned __int64 m_TransactionLength; // rbp
  unsigned int v6; // esi
  _MDL *globals; // r15
  unsigned __int64 m_MaxFragmentLength; // r12
  unsigned __int64 m_StartOffset; // r13
  int v10; // eax
  FxDmaEnabler *m_DmaEnabler; // rcx
  const void *v12; // rbx
  unsigned __int64 *NextOffset; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+48h] [rbp-50h]
  unsigned int mapRegistersRequired; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 nextOffset; // [rsp+A8h] [rbp+10h] BYREF
  _MDL *nextMdl; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 possibleLength; // [rsp+B8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  v2 = 0LL;
  if ( this->m_RequireSingleTransfer )
    return 0LL;
  m_TransactionLength = this->m_TransactionLength;
  v6 = 0;
  globals = this->m_StartMdl;
  LODWORD(m_MaxFragmentLength) = 0;
  m_StartOffset = this->m_StartOffset;
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
      v10 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              nextMdl,
              nextOffset,
              m_MaxFragmentLength,
              this->m_AdapterInfo->NumberOfMapRegisters,
              (unsigned int *)&possibleLength,
              &mapRegistersRequired);
      v6 = v10;
      if ( v10 < 0 )
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
          0xDu,
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
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v12, v10);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return v6;
}
