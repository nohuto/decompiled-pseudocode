/*
 * XREFs of MiReferencePageRuns @ 0x1401070F0
 * Callers:
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiReferencePageRuns @ 0x1401070F0 (MiReferencePageRuns.c)
 *     MiFinishResume @ 0x140120570 (MiFinishResume.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x14013AE70 (MiInitializePageZeroing.c)
 *     MiRebuildLargePage @ 0x1401FD8CC (MiRebuildLargePage.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1404E5A08 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetNodeChannelRanges @ 0x140576FC4 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140658E18 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14065B124 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x140663718 (MiCombineAllPhysicalMemory.c)
 *     MiInitializeScrubPacket @ 0x140664CDC (MiInitializeScrubPacket.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x1401070F0 (MiReferencePageRuns.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  volatile LONG *v2; // rbp
  KIRQL v5; // al
  _QWORD *v6; // rbx

  v2 = (volatile LONG *)(a1 + 232);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  if ( a2 == 1 )
  {
    v6 = *(_QWORD **)(a1 + 64);
  }
  else
  {
    v6 = MmPhysicalMemoryBlock;
    if ( (int *)a1 != MiSystemPartition )
      v6 = *(_QWORD **)(a1 + 136);
  }
  if ( v6 )
  {
    ++*(v6 - 1);
    if ( (int *)a1 == MiSystemPartition )
      ++*(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusive(v2, v5);
  if ( !v6 )
    return MiReferencePageRuns(MiSystemPartition, a2);
  return (__int64)v6;
}
