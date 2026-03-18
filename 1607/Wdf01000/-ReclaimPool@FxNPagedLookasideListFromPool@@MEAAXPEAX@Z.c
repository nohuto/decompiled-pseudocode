/*
 * XREFs of ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007AC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxNPagedLookasideListFromPool::ReclaimPool(FxNPagedLookasideListFromPool *this, void *Pool)
{
  FxFreeToNPagedLookasideList((_PAGED_LOOKASIDE_LIST *)&this->m_PoolLookaside, Pool);
}
