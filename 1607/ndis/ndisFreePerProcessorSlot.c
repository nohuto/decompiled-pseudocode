/*
 * XREFs of ndisFreePerProcessorSlot @ 0x1C000FF88
 * Callers:
 *     NdisFreeRWLock @ 0x1C000FF60 (NdisFreeRWLock.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0012108 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009E760 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisAllocateOpenBlock @ 0x1C00A23B4 (ndisAllocateOpenBlock.c)
 *     ndisFreeOpenBlock @ 0x1C00AC8AC (ndisFreeOpenBlock.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreePerProcessorSlot(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  KIRQL v4; // al

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = (__int64)(a1 - (a1 & 0xFFFFFFFFFFFFF000uLL)) >> 3;
  if ( *(_DWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 4LL * (unsigned int)v3 - 4076) == a2 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
    *(_DWORD *)(v2 + 4LL * (unsigned int)v3 - 4076) = *(_DWORD *)(v2 - 4080);
    *(_DWORD *)(v2 - 4080) = v3 | 0xFE000000;
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v4);
  }
}
