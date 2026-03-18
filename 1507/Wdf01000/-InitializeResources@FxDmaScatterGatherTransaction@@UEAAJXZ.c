/*
 * XREFs of ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C00618A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006354C (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C0063600 (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 *     WPP_IFR_SF_qqdid @ 0x1C0064248 (WPP_IFR_SF_qqdid.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::InitializeResources(FxDmaScatterGatherTransaction *this)
{
  unsigned __int64 m_TransactionLength; // r14
  const void *v2; // rdi
  _MDL *globals; // r12
  unsigned __int64 m_StartOffset; // rax
  unsigned int v6; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned __int64 m_MaxFragmentLength; // r13
  unsigned int NumberOfMapRegisters; // r9d
  int v10; // eax
  FxDmaEnabler *m_DmaEnabler; // rcx
  const void *v13; // rbx
  unsigned __int64 *NextOffset; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-20h]
  unsigned __int64 possibleLength[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int mapRegistersRequired; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 nextOffset; // [rsp+B8h] [rbp+50h] BYREF
  _MDL *nextMdl; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp+60h]

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
      globals = nextMdl;
      if ( m_TransactionLength < m_MaxFragmentLength )
        m_MaxFragmentLength = m_TransactionLength;
      NumberOfMapRegisters = this->m_AdapterInfo->NumberOfMapRegisters;
      v20 = nextOffset;
      v10 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              nextMdl,
              nextOffset,
              m_MaxFragmentLength,
              NumberOfMapRegisters,
              (unsigned int *)possibleLength,
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
          0x1Bu,
          (const _GUID *)NextOffset,
          v2,
          globals,
          mapRegistersRequired,
          m_DmaEnabler->m_MaxSGElements,
          v15);
        return 3223323146LL;
      }
      m_StartOffset = v20;
      m_TransactionLength -= m_MaxFragmentLength;
      if ( !m_TransactionLength )
        return v6;
    }
    if ( this->m_ObjectSize )
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransaction_cpp_Traceguids, v13, v10);
    mapRegistersRequired = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  return v6;
}
