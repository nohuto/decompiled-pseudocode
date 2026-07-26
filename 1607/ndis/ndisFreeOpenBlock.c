/*
 * XREFs of ndisFreeOpenBlock @ 0x1C00AC8AC
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AC7E0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C000FF88 (ndisFreePerProcessorSlot.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C0015640 (NdisNblTrackerDeregisterComponent.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 */

void __fastcall ndisFreeOpenBlock(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  v2 = *(void **)(a1 + 792);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 792) = 0LL;
  }
  v3 = *(void **)(a1 + 800);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 800) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*(_QWORD *)(a1 + 680));
  NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688));
  v4 = *(_QWORD *)(a1 + 816);
  *(_QWORD *)(a1 + 688) = 0LL;
  ndisFreePerProcessorSlot(v4, 1869431886);
  v5 = *(void **)(a1 + 480);
  *(_QWORD *)(a1 + 816) = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 480) = 0LL;
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
