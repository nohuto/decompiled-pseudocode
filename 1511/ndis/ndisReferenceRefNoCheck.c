/*
 * XREFs of ndisReferenceRefNoCheck @ 0x1C000B3FC
 * Callers:
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     NdisFIndicateStatus @ 0x1C0022D70 (NdisFIndicateStatus.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00539A0 (ndisFDirectOidRequestCompleteInternal.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 */

void __fastcall ndisReferenceRefNoCheck(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  KIRQL v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  v5 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 16);
  ++*(_WORD *)(a1 + 8);
  v6 = v4;
  ndisReferenceWithTag(v5, a2);
  KeReleaseSpinLock((PKSPIN_LOCK)a1, v6);
}
