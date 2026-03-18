/*
 * XREFs of FxFreeToNPagedLookasideList @ 0x1C007B188
 * Callers:
 *     ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0011E04 (-_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBu.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C006941C (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007AC90 (-ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007B130 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
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
