/*
 * XREFs of ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C00780F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxNPagedLookasideListFromPool::ReclaimPool(FxNPagedLookasideListFromPool *this, _SLIST_ENTRY *Pool)
{
  _NPAGED_LOOKASIDE_LIST *p_m_PoolLookaside; // rbx

  p_m_PoolLookaside = &this->m_PoolLookaside;
  ++this->m_PoolLookaside.L.TotalFrees;
  if ( ExQueryDepthSList(&this->m_PoolLookaside.L.ListHead) < this->m_PoolLookaside.L.Depth )
  {
    ExpInterlockedPushEntrySList(&p_m_PoolLookaside->L.ListHead, Pool);
  }
  else
  {
    ++p_m_PoolLookaside->L.FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))p_m_PoolLookaside->L.FreeEx)(Pool);
  }
}
