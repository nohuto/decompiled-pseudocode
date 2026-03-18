/*
 * XREFs of ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C005AFF8
 * Callers:
 *     imp_WdfDmaTransactionFreeResources @ 0x1C00583D0 (imp_WdfDmaTransactionFreeResources.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C005B110 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseAdapter(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rsi
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState m_State; // eax
  int v6; // ecx
  unsigned __int64 v7; // rbx

  m_Globals = this->m_Globals;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x28u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
  p_m_State = &this->m_State;
  m_State = this->m_State;
  if ( (unsigned int)m_State <= FxDmaTransactionStateDeleted )
  {
    v6 = 275;
    if ( _bittest(&v6, m_State) )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x29u, WPP_FxDmaTransaction_cpp_Traceguids, _a1, this->m_State);
      if ( this->m_ObjectSize )
        v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v7 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, *(int *)p_m_State);
    }
  }
  FxDmaTransactionBase::ReleaseForReuse(this, 1u);
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x2Au, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
}
