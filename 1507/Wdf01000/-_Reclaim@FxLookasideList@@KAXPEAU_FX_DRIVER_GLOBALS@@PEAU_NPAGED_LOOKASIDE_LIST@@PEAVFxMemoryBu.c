/*
 * XREFs of ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0079140
 * Callers:
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C00780D0 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0078640 (-Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0075464 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 */

void __fastcall FxLookasideList::_Reclaim(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _NPAGED_LOOKASIDE_LIST *List,
        FxMemoryBufferFromLookaside *Memory)
{
  _SINGLE_LIST_ENTRY *Next; // rdi

  Next = FxObject::_CleanupPointer(FxDriverGlobals, Memory)->Next;
  ++List->L.TotalFrees;
  if ( ExQueryDepthSList(&List->L.ListHead) < List->L.Depth )
  {
    ExpInterlockedPushEntrySList(&List->L.ListHead, (PSLIST_ENTRY)Next);
  }
  else
  {
    ++List->L.FreeMisses;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY *))List->L.FreeEx)(Next);
  }
}
