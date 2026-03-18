/*
 * XREFs of MiDereferencePageRuns @ 0x1400BFEC0
 * Callers:
 *     MiRebuildLargePage @ 0x1400BE1B0 (MiRebuildLargePage.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiFinishResume @ 0x1401121BC (MiFinishResume.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     MiSortPartitionMdls @ 0x1401D9E48 (MiSortPartitionMdls.c)
 *     MmGetPhysicalMemoryRanges @ 0x140484B04 (MmGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14054420C (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406237E8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140625888 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x14062CE70 (MiReleaseScrubPacket.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  KIRQL v4; // dl
  void *v6; // rsi
  _QWORD *v7; // rbx

  v1 = (_QWORD *)(a1 - 16);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 - 16);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 224));
  if ( (int *)v3 == MiSystemPartition && (*(_QWORD *)(v3 + 64))-- == 1LL )
  {
    v2 = *(_QWORD **)(v3 + 120);
    *(_QWORD *)(v3 + 120) = 0LL;
  }
  --v1[1];
  v6 = 0LL;
  if ( !v1[1] )
    v6 = v1;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 224), v4);
  if ( v2 )
  {
    do
    {
      v7 = (_QWORD *)*v2;
      KeSignalGate(v2 + 1, 1LL);
      v2 = v7;
    }
    while ( v7 );
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
