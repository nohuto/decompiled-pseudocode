/*
 * XREFs of ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007B130
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

void __fastcall FxPagedLookasideListFromPool::ReclaimPool(FxPagedLookasideListFromPool *this, void *Pool)
{
  if ( this->m_BufferSize >= 0x1000 )
  {
    FxFreeToNPagedLookasideList(&this->m_PoolLookaside, Pool);
  }
  else
  {
    if ( this->m_Globals->FxPoolTrackingOn )
      FxPoolRemovePagedAllocateTracker(*((FX_POOL_TRACKER **)Pool - 2));
    FxFreeToNPagedLookasideList(&this->m_PoolLookaside, *((void **)Pool - 2));
  }
}
