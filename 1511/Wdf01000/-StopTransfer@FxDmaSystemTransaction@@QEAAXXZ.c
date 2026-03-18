/*
 * XREFs of ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C005C310
 * Callers:
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x1C0058E70 (imp_WdfDmaTransactionStopSystemTransfer.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ @ 0x1C0059D78 (-CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaSystemTransaction::StopTransfer(FxDmaSystemTransaction *this)
{
  unsigned __int64 v2; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  unsigned int v5; // edx

  this->m_IsCancelled = 1;
  v2 = 0LL;
  if ( !FxDmaSystemTransaction::CancelMappedTransfer(this) )
  {
    m_Globals = this->m_Globals;
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x3Eu, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v5, 0xBu) || m_Globals->FxVerifyDownlevel )
      {
        if ( this->m_ObjectSize )
          v2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v2, this->m_State);
      }
    }
  }
}
