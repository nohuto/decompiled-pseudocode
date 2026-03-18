/*
 * XREFs of ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C006C92C
 * Callers:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0004740 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C00085D0 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0008C30 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C000DA30 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C000DEA0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C00280E0 (--_GFxString@@UEAAPEAXI@Z.c)
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C006CB30 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolRemovePagedAllocateTracker(FX_POOL_TRACKER *Tracker)
{
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax

  ExAcquireFastMutex(&Tracker->Pool->PagedLock.m_Lock);
  Flink = Tracker->Link.Flink;
  Blink = Tracker->Link.Blink;
  if ( (FX_POOL_TRACKER *)Tracker->Link.Flink->Blink != Tracker || (FX_POOL_TRACKER *)Blink->Flink != Tracker )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Tracker->Pool->PagedBytes -= Tracker->Size;
  --Tracker->Pool->PagedAllocations;
  ExReleaseFastMutex(&Tracker->Pool->PagedLock.m_Lock);
}
