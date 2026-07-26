/*
 * XREFs of ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C0004280 (NdisFreeCloneNetBufferList.c)
 *     ndisPplAllocate @ 0x1C000BC30 (ndisPplAllocate.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C000BDF0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000C460 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferMdlAndData @ 0x1C000C780 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateNetBufferList @ 0x1C000C9D0 (NdisAllocateNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000DC40 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C000F670 (NdisFreeNetBuffer.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0014630 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0014FA0 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPplLazyInitializeLookaside(PLOOKASIDE_LIST_EX Lookaside, struct _NDIS_NPAGED_LOOKASIDE_LIST *a2)
{
  KSPIN_LOCK *p_Depth; // rdi
  KIRQL v5; // bp

  p_Depth = (KSPIN_LOCK *)&Lookaside[2].L.Depth;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Lookaside[2].L.Depth);
  if ( !LOBYTE(Lookaside[2].L.AllocateMisses) )
  {
    ExInitializeLookasideListEx(
      Lookaside,
      (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
      (PFREE_FUNCTION_EX)a2->List.L.FreeEx,
      NonPagedPoolNx,
      0,
      a2->List.L.Size,
      a2->List.L.Tag,
      0x400u);
    LOBYTE(Lookaside[2].L.AllocateMisses) = 1;
  }
  KeReleaseSpinLock(p_Depth, v5);
}
