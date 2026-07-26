/*
 * XREFs of ndisReferenceRefNoCheck @ 0x1C0066F58
 * Callers:
 *     NdisFIndicateStatus @ 0x1C001E510 (NdisFIndicateStatus.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00535B0 (ndisFDirectOidRequestCompleteInternal.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
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
