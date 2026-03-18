/*
 * XREFs of ?FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C006C874
 * Callers:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C006C990 (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolInsertPagedAllocateTracker(
        FX_POOL *Pool,
        FX_POOL_TRACKER *Tracker,
        unsigned __int64 Size,
        unsigned int Tag,
        void *Caller)
{
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 PagedBytes; // rdx
  unsigned int PagedAllocations; // eax

  Tracker->Pool = Pool;
  Tracker->CallersAddress = Caller;
  Tracker->Tag = Tag;
  Tracker->PoolType = PagedPool;
  Tracker->Size = Size;
  ExAcquireFastMutex(&Pool->PagedLock.m_Lock);
  Blink = Pool->PagedHead.Blink;
  Tracker->Link.Flink = &Pool->PagedHead;
  Tracker->Link.Blink = Blink;
  if ( Blink->Flink != &Pool->PagedHead )
    __fastfail(3u);
  Blink->Flink = &Tracker->Link;
  Pool->PagedHead.Blink = &Tracker->Link;
  Pool->PagedBytes += Size;
  ++Pool->PagedAllocations;
  PagedBytes = Pool->PagedBytes;
  PagedAllocations = Pool->PagedAllocations;
  if ( PagedBytes > Pool->PeakPagedBytes )
    Pool->PeakPagedBytes = PagedBytes;
  if ( PagedAllocations > Pool->PeakPagedAllocations )
    Pool->PeakPagedAllocations = PagedAllocations;
  ExReleaseFastMutex(&Pool->PagedLock.m_Lock);
}
