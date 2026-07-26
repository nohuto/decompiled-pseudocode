/*
 * XREFs of ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0012F54
 * Callers:
 *     NdisNblTrackerRegisterComponent @ 0x1C001B800 (NdisNblTrackerRegisterComponent.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C001EA20 (NdisNblTrackerDeregisterComponent.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C0010D48 (ndisFreePerProcessorSlot.c)
 */

void __fastcall ndisNblTrackerDeleteTracker(struct _NDIS_NBL_TRACKER *a1)
{
  _NDIS_NBL_TRACKER_BUCKET *Buckets; // rbx
  __int64 v3; // rdi
  __int64 Slot; // rcx

  Buckets = a1->Buckets;
  v3 = 2LL;
  do
  {
    Slot = (__int64)Buckets->Slot;
    if ( Buckets->Slot )
    {
      Buckets->Slot = 0LL;
      ndisFreePerProcessorSlot(Slot, 1802781774);
    }
    ++Buckets;
    --v3;
  }
  while ( v3 );
  ExFreePoolWithTag(a1, 0);
}
