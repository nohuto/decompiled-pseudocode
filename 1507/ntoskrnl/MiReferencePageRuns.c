/*
 * XREFs of MiReferencePageRuns @ 0x1401000AC
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiRebuildLargePage @ 0x1400FFA70 (MiRebuildLargePage.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MmGetPhysicalMemoryRanges @ 0x14051CF60 (MmGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1405BB304 (MmGetNodeChannelRanges.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406A2ADC (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1406A5284 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x1406AA87C (MiInitializeScrubPacket.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  volatile signed __int32 *v3; // rdi
  unsigned int v5; // ebx
  signed __int32 v6; // eax
  _QWORD *v7; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp+8h]

  v3 = (volatile signed __int32 *)(a1 + 240);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(v3);
    while ( 1 )
    {
      v6 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v6 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v6 | 0x40000000, v6);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  if ( a2 == 1 )
  {
    v7 = *(_QWORD **)(a1 + 56);
  }
  else
  {
    v7 = MmPhysicalMemoryBlock;
    if ( (__int16 *)a1 != MiSystemPartition )
      v7 = *(_QWORD **)(a1 + 144);
  }
  if ( v7 )
    ++*(v7 - 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  if ( !v7 )
    return MiReferencePageRuns(MiSystemPartition, a2);
  return (__int64)v7;
}
