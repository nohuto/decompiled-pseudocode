/*
 * XREFs of ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0006450
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0005360 (NdisAllocateCloneNetBufferList.c)
 *     ndisPplAllocate @ 0x1C000592C (ndisPplAllocate.c)
 *     NdisAllocateNetBufferMdlAndData @ 0x1C0005AF0 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0005D40 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0006050 (NdisAllocateNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0006C90 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0006F00 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C000F5A0 (NdisFreeNetBuffer.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00206A0 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0020E90 (NdisFreeFragmentNetBufferList.c)
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
