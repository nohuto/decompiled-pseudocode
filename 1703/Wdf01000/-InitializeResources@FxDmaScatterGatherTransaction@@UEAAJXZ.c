/*
 * XREFs of ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C006CEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqdid @ 0x1C006D690 (WPP_IFR_SF_qqdid.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006EEF8 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C006EFB4 (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::InitializeResources(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 m_TransactionLength; // rdi
  int v5; // esi
  _MDL *globals; // r14
  unsigned __int64 m_MaxFragmentLength; // r15
  unsigned __int64 m_StartOffset; // r12
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v11; // rbx
  unsigned __int16 v12; // ax
  const void *v13; // rbx
  unsigned __int64 *NextOffset; // [rsp+20h] [rbp-78h]
  int v15; // [rsp+48h] [rbp-50h]
  unsigned int mapRegistersRequired; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 nextOffset; // [rsp+A8h] [rbp+10h] BYREF
  _MDL *nextMdl; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 possibleLength; // [rsp+B8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  if ( this->m_RequireSingleTransfer )
    return 0LL;
  m_TransactionLength = this->m_TransactionLength;
  v5 = 0;
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
      v5 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
             nextMdl,
             nextOffset,
             m_MaxFragmentLength,
             this->m_AdapterInfo->NumberOfMapRegisters,
             (unsigned int *)&possibleLength,
             &mapRegistersRequired);
      if ( v5 < 0 )
        break;
      m_DmaEnabler = this->m_DmaEnabler;
      if ( mapRegistersRequired > m_DmaEnabler->m_MaxSGElements )
      {
        m_ObjectSize = this->m_ObjectSize;
        v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v11 = 0LL;
        WPP_IFR_SF_qqdid(
          m_Globals,
          m_DmaEnabler->m_MaxSGElements,
          mapRegistersRequired,
          0xDu,
          (const _GUID *)NextOffset,
          v11,
          globals,
          mapRegistersRequired,
          m_DmaEnabler->m_MaxSGElements,
          v15);
        return 3223323146LL;
      }
      m_TransactionLength -= m_MaxFragmentLength;
      if ( !m_TransactionLength )
        return (unsigned int)v5;
    }
    v12 = this->m_ObjectSize;
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12 )
      v13 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v13, v5);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (unsigned int)v5;
}
