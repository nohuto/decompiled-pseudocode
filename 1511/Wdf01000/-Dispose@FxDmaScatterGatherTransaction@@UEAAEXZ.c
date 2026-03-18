/*
 * XREFs of ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C005A010
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C005A080 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     FxFreeToNPagedLookasideList @ 0x1C005CB98 (FxFreeToNPagedLookasideList.c)
 */

unsigned __int8 __fastcall FxDmaScatterGatherTransaction::Dispose(FxDmaScatterGatherTransaction *this)
{
  unsigned __int8 v2; // al
  void *m_LookasideBuffer; // rdx
  unsigned __int8 v4; // di
  FxDmaEnabler *m_DmaEnabler; // rcx

  v2 = FxDmaTransactionBase::Dispose(this);
  m_LookasideBuffer = this->m_LookasideBuffer;
  v4 = v2;
  if ( m_LookasideBuffer )
  {
    FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_DmaEnabler->m_SGList, m_LookasideBuffer);
    m_DmaEnabler = this->m_DmaEnabler;
    this->m_LookasideBuffer = 0LL;
    m_DmaEnabler->Release(
      m_DmaEnabler,
      this,
      857,
      "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransaction.cpp");
  }
  return v4;
}
