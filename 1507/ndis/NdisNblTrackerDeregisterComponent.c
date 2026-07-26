/*
 * XREFs of NdisNblTrackerDeregisterComponent @ 0x1C0019450
 * Callers:
 *     ndisDereferenceFilter @ 0x1C00532D0 (ndisDereferenceFilter.c)
 *     ndisFreeOpenBlock @ 0x1C009AD7C (ndisFreeOpenBlock.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009BB1C (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00A4E98 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisSelectiveSuspendFree @ 0x1C00DCBC8 (ndisSelectiveSuspendFree.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisNblTrackerDeregisterComponent(__int64 a1)
{
  struct _NDIS_NBL_TRACKER *v1; // rbx
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx

  if ( (a1 & 1) != 0 )
  {
    v1 = (struct _NDIS_NBL_TRACKER *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
    Flink = v1->Linkage.Flink;
    Blink = v1->Linkage.Blink;
    if ( (struct _NDIS_NBL_TRACKER *)v1->Linkage.Flink->Blink != v1 || (struct _NDIS_NBL_TRACKER *)Blink->Flink != v1 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    KeReleaseSpinLock(&ndisNblTrackerListLock, v2);
    ndisNblTrackerDeleteTracker(v1);
  }
}
