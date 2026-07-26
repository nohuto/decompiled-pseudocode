/*
 * XREFs of ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000BAC8
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000AEA0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferMdlAndData @ 0x1C000B380 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateNetBuffer @ 0x1C000B5D0 (NdisAllocateNetBuffer.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000B7E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000BB60 (NdisFreeNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x1C000C3C0 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C000D790 (NdisFreeNetBuffer.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0020B60 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00212C0 (NdisFreeFragmentNetBufferList.c)
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
      ndisAllocateFromNPagedPool,
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
