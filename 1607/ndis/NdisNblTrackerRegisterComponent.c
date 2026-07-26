/*
 * XREFs of NdisNblTrackerRegisterComponent @ 0x1C0015050
 * Callers:
 *     ndisAllocateOpenBlock @ 0x1C00A23B4 (ndisAllocateOpenBlock.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00A7088 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00DC4F4 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C000FA9C (ndisAllocatePerProcessorSlot.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0012108 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall NdisNblTrackerRegisterComponent(__int16 a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  __int64 v7; // rdi
  __int64 *v8; // r14
  unsigned int v9; // esi
  __int64 PerProcessorSlot; // rax
  KIRQL v11; // al
  __int64 *v12; // rcx

  if ( ndisNblTrackerMode < NdisTrackNblRuntimeCheck )
    return a2 | 2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6B74444Eu);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return a2 | 2;
  memset(PoolWithTag, 0, 0x48uLL);
  *(_QWORD *)(v7 + 32) = a3;
  v8 = (__int64 *)(v7 + 40);
  *(_WORD *)(v7 + 16) = a1;
  v9 = 0;
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)v7 = v7;
  do
  {
    PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6B74444Eu);
    if ( !PerProcessorSlot )
    {
      ndisNblTrackerDeleteTracker((struct _NDIS_NBL_TRACKER *)v7);
      return a2 | 2;
    }
    *v8 = PerProcessorSlot;
    ++v9;
    v8 += 2;
  }
  while ( v9 < 2 );
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
  v12 = (__int64 *)qword_1C0089740;
  if ( *(struct _NDIS_NBL_TRACKER ***)qword_1C0089740 != &ndisNblTrackerList )
    __fastfail(3u);
  *(_QWORD *)v7 = &ndisNblTrackerList;
  *(_QWORD *)(v7 + 8) = v12;
  *v12 = v7;
  qword_1C0089740 = v7;
  KeReleaseSpinLock(&ndisNblTrackerListLock, v11);
  return v7 | 1;
}
