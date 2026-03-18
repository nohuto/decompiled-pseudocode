/*
 * XREFs of MiDereferencePageRuns @ 0x140107058
 * Callers:
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiFinishResume @ 0x140120570 (MiFinishResume.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x14013AE70 (MiInitializePageZeroing.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x1401F2480 (MiUpdatePartitionMemory.c)
 *     MiRebuildLargePage @ 0x1401FD8CC (MiRebuildLargePage.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1404E5A08 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetNodeChannelRanges @ 0x140576FC4 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140658E18 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14065B124 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x140663718 (MiCombineAllPhysicalMemory.c)
 *     MiReleaseScrubPacket @ 0x140664D84 (MiReleaseScrubPacket.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  KIRQL v4; // al
  bool v5; // zf
  void *v6; // rsi
  _QWORD *v7; // rbx

  v1 = (_QWORD *)(a1 - 16);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 - 16);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 232));
  if ( (int *)v3 == MiSystemPartition )
  {
    v5 = (*(_QWORD *)(v3 + 72))-- == 1LL;
    if ( v5 )
    {
      v2 = *(_QWORD **)(v3 + 128);
      *(_QWORD *)(v3 + 128) = 0LL;
    }
  }
  v5 = v1[1]-- == 1LL;
  v6 = 0LL;
  if ( v5 )
    v6 = v1;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 232), v4);
  if ( v2 )
  {
    do
    {
      v7 = (_QWORD *)*v2;
      KeSignalGate((__int64)(v2 + 1), 1u);
      v2 = v7;
    }
    while ( v7 );
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
