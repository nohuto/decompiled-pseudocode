/*
 * XREFs of FxFreeToNPagedLookasideList @ 0x1C006D640
 * Callers:
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C003D8F0 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C006CD00 (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007EB90 (-ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 *     ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C007F0B0 (-Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007F0E0 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeToNPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside, _SLIST_ENTRY *Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))Lookaside->L.FreeEx)(Entry);
  }
}
