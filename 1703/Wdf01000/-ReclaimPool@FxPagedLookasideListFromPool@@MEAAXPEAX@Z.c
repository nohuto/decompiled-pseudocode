/*
 * XREFs of ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

void __fastcall FxPagedLookasideListFromPool::ReclaimPool(FxPagedLookasideListFromPool *this, _SLIST_ENTRY *Pool)
{
  if ( this->m_BufferSize >= 0x1000 )
  {
    FxFreeToNPagedLookasideList(&this->m_PoolLookaside, Pool);
  }
  else
  {
    if ( this->m_Globals->FxPoolTrackingOn )
      FxPoolRemovePagedAllocateTracker((FX_POOL_TRACKER *)Pool[-1].Next);
    FxFreeToNPagedLookasideList(&this->m_PoolLookaside, Pool[-1].Next);
  }
}
