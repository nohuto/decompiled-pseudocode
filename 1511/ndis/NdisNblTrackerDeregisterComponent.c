/*
 * XREFs of NdisNblTrackerDeregisterComponent @ 0x1C001EA20
 * Callers:
 *     ndisDereferenceFilter @ 0x1C00536C0 (ndisDereferenceFilter.c)
 *     ndisFreeOpenBlock @ 0x1C009892C (ndisFreeOpenBlock.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C0098D8C (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00A540C (ndisUpdateNoPauseOnSuspend.c)
 *     ndisSelectiveSuspendFree @ 0x1C00D6518 (ndisSelectiveSuspendFree.c)
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
