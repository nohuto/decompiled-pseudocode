/*
 * XREFs of MiDereferencePageRuns @ 0x140104DD8
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiFinishResume @ 0x140120AE0 (MiFinishResume.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x1401F22AC (MiUpdatePartitionMemory.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1404C843C (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetNodeChannelRanges @ 0x140577504 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140658EFC (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14065B208 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     MiReleaseScrubPacket @ 0x140664E68 (MiReleaseScrubPacket.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
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
