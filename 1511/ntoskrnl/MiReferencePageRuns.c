/*
 * XREFs of MiReferencePageRuns @ 0x1400BFDB4
 * Callers:
 *     MiRebuildLargePage @ 0x1400BE1B0 (MiRebuildLargePage.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiFinishResume @ 0x1401121BC (MiFinishResume.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MmGetPhysicalMemoryRanges @ 0x140484B04 (MmGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14054420C (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406237E8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140625888 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x14062CDC8 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  volatile LONG *v2; // rbp
  KIRQL v5; // al
  _QWORD *v6; // rbx

  v2 = (volatile LONG *)(a1 + 224);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  if ( a2 == 1 )
  {
    v6 = *(_QWORD **)(a1 + 56);
  }
  else
  {
    v6 = MmPhysicalMemoryBlock;
    if ( (int *)a1 != MiSystemPartition )
      v6 = *(_QWORD **)(a1 + 128);
  }
  if ( v6 )
  {
    ++*(v6 - 1);
    if ( (int *)a1 == MiSystemPartition )
      ++*(_QWORD *)(a1 + 64);
  }
  ExReleaseSpinLockExclusive(v2, v5);
  if ( !v6 )
    return MiReferencePageRuns(MiSystemPartition, a2);
  return (__int64)v6;
}
