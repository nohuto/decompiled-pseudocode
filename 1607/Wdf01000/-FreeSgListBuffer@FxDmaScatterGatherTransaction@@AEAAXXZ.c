/*
 * XREFs of ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C006941C
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C00693C0 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 *     ?SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z @ 0x1C00697E0 (-SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z.c)
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x1C007B188 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxDmaScatterGatherTransaction::FreeSgListBuffer(FxDmaScatterGatherTransaction *this)
{
  if ( this->m_IsBufferFromLookaside )
  {
    FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_DmaEnabler->m_SGList, this->m_SGListBuffer);
    this->m_IsBufferFromLookaside = 0;
  }
  else
  {
    ExFreePoolWithTag(this->m_SGListBuffer, 0);
  }
  this->m_SGListBuffer = 0LL;
  this->m_SgListBufferSize = 0;
}
