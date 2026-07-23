/*
 * XREFs of MiReferencePageRuns @ 0x140104E70
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiFinishResume @ 0x140120AE0 (MiFinishResume.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1404C843C (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetNodeChannelRanges @ 0x140577504 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140658EFC (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14065B208 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     MiInitializeScrubPacket @ 0x140664DC0 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
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
