/*
 * XREFs of ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C007B110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPagedLookasideListFromPool::Reclaim(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside *Memory)
{
  FxLookasideList::_Reclaim(this->m_Globals, (_PAGED_LOOKASIDE_LIST *)&this->m_ObjectLookaside, Memory);
}
