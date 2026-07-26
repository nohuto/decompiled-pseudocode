/*
 * XREFs of PplpLazyInitializeLookasideList @ 0x1C0011244
 * Callers:
 *     NdisMAllocateNetBufferSGList @ 0x1C000A470 (NdisMAllocateNetBufferSGList.c)
 *     NdisMFreeNetBufferSGList @ 0x1C000C940 (NdisMFreeNetBufferSGList.c)
 *     ndisMAllocSGList @ 0x1C0046410 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C00467F0 (ndisMAllocSGListS.c)
 *     ndisMFreeSGList @ 0x1C0046D00 (ndisMFreeSGList.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpLazyInitializeLookasideList(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  if ( !*(_BYTE *)(a2 + 112) )
  {
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)a2,
      (PALLOCATE_FUNCTION_EX)PplGenericAllocateFunction,
      (PFREE_FUNCTION_EX)PplGenericFreeFunction,
      *(POOL_TYPE *)(a1 + 24),
      *(_DWORD *)(a1 + 4),
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 8),
      *(_WORD *)(a1 + 28));
    *(_BYTE *)(a2 + 112) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 104), v4);
}
