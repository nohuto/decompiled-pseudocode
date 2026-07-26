/*
 * XREFs of ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C00187D8
 * Callers:
 *     ndisFSetRestartAttributes @ 0x1C009CE04 (ndisFSetRestartAttributes.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018110 (-ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(struct _NDIS_FILTER_BLOCK *a1, _QWORD *a2, char a3)
{
  unsigned int v3; // ebx
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // rcx

  v3 = 0;
  if ( a2[1] || a2[2] || a2[4] || a2[5] )
  {
    if ( !a1->IterativeDataPathTracker )
      return (unsigned int)ndisAllocateIterativeDataPathTracker(a1);
  }
  else if ( !a3 )
  {
    IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)a1->IterativeDataPathTracker;
    if ( IterativeDataPathTracker )
    {
      ExFreePoolWithTag(IterativeDataPathTracker, 0);
      a1->IterativeDataPathTracker = 0LL;
    }
  }
  return v3;
}
