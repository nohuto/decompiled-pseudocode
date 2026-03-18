/*
 * XREFs of ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C0060B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C0060BF0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 */

unsigned __int8 __fastcall FxDmaScatterGatherTransaction::Dispose(FxDmaScatterGatherTransaction *this)
{
  unsigned __int8 v2; // al
  _SLIST_ENTRY *m_LookasideBuffer; // rsi
  unsigned __int8 v4; // bp
  FxDmaEnabler::<unnamed_type_m_SGList> *p_m_SGList; // rbx
  FxDmaEnabler *m_DmaEnabler; // rcx

  v2 = FxDmaTransactionBase::Dispose(this);
  m_LookasideBuffer = (_SLIST_ENTRY *)this->m_LookasideBuffer;
  v4 = v2;
  if ( m_LookasideBuffer )
  {
    p_m_SGList = &this->m_DmaEnabler->m_SGList;
    ++p_m_SGList->ScatterGatherProfile.Lookaside.L.TotalFrees;
    if ( ExQueryDepthSList(&p_m_SGList->ScatterGatherProfile.Lookaside.L.ListHead) < p_m_SGList->ScatterGatherProfile.Lookaside.L.Depth )
    {
      ExpInterlockedPushEntrySList(&p_m_SGList->ScatterGatherProfile.Lookaside.L.ListHead, m_LookasideBuffer);
    }
    else
    {
      ++p_m_SGList->ScatterGatherProfile.Lookaside.L.FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SGList->ScatterGatherProfile.Lookaside.L.FreeEx)(m_LookasideBuffer);
    }
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
