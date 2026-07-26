/*
 * XREFs of ndisReferenceRefNoCheck @ 0x1C00167B8
 * Callers:
 *     ndisQueueRequestWorkItem @ 0x1C0016378 (ndisQueueRequestWorkItem.c)
 *     NdisFIndicateStatus @ 0x1C001ED80 (NdisFIndicateStatus.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00583D0 (ndisFDirectOidRequestCompleteInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 */

void __fastcall ndisReferenceRefNoCheck(__int64 a1)
{
  KIRQL v2; // al
  struct _NDIS_REFCOUNT_BLOCK *v3; // rcx
  KIRQL v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  v3 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 16);
  ++*(_WORD *)(a1 + 8);
  v4 = v2;
  NdisReferenceWithTag(v3);
  KeReleaseSpinLock((PKSPIN_LOCK)a1, v4);
}
