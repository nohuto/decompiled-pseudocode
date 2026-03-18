/*
 * XREFs of ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C003A1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxNPagedLookasideList::Reclaim(
        FxNPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside *Memory)
{
  FxLookasideList::_Reclaim(this->m_Globals, (_PAGED_LOOKASIDE_LIST *)&this->m_ObjectLookaside, Memory);
}
