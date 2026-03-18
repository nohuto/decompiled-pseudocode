/*
 * XREFs of ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0078640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPagedLookasideListFromPool::Reclaim(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside *Memory)
{
  FxLookasideList::_Reclaim(this->m_Globals, &this->m_ObjectLookaside, Memory);
}
