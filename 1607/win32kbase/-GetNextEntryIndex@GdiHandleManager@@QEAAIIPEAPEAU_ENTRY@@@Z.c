/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C005C384 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C006CF54 (MultiUserCleanupDCs.c)
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 *     HmgPrefetchAllObjt @ 0x1C0076990 (HmgPrefetchAllObjt.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0081514 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00C0B98 (HmgNextGarbageCollectible.c)
 *     HmgSafeNextObjtByIndex @ 0x1C00C0C6C (HmgSafeNextObjtByIndex.c)
 *     NtGdiGetStats @ 0x1C00C0D70 (NtGdiGetStats.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::GetNextEntryIndex(GdiHandleManager *this, unsigned int a2, struct _ENTRY **a3)
{
  GdiHandleEntryDirectory **DeferredContext; // rsi
  struct _ENTRY *Entry; // rax

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  *a3 = 0LL;
  while ( ++a2 < *(_DWORD *)DeferredContext )
  {
    Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], a2, 0);
    *a3 = Entry;
    if ( Entry )
      return a2;
  }
  return 0LL;
}
