/*
 * XREFs of MiDereferencePageRuns @ 0x140100004
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiRebuildLargePage @ 0x1400FFA70 (MiRebuildLargePage.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MmGetPhysicalMemoryRanges @ 0x14051CF60 (MmGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1405BB304 (MmGetNodeChannelRanges.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406A2ADC (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1406A5284 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x1406AA918 (MiReleaseScrubPacket.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  _QWORD *v1; // rsi
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
  signed __int32 v5; // eax
  void *v6; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)(a1 - 16);
  v2 = (volatile signed __int32 *)(*(_QWORD *)(a1 - 16) + 240LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v2);
    while ( 1 )
    {
      v5 = *v2;
      if ( (*v2 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v2, v5 | 0x40000000, v5);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  --v1[1];
  v6 = 0LL;
  if ( !v1[1] )
    v6 = v1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  else
    *v2 = 0;
  __writecr8(CurrentIrql);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
