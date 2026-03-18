/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x1403A9BF0
 * Callers:
 *     KiCompleteKernelInit @ 0x1403A9A9C (KiCompleteKernelInit.c)
 *     KiAllocateCpuSetData @ 0x140763C28 (KiAllocateCpuSetData.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     RtlWriteReleaseTickLock @ 0x1400DE3CC (RtlWriteReleaseTickLock.c)
 *     RtlWriteAcquireTickLock @ 0x1400DE444 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int *v8; // rdx
  __int64 result; // rax

  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v3 = *(unsigned __int8 *)(a1 + 1616);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v4 = *(unsigned __int8 *)(a1 + 1617);
    ++KiCpuSetCount[v3];
    v5 = (unsigned int)v3;
    v6 = *(_QWORD *)(a1 + 1608);
    ++KiTotalCpuSetCount;
    v7 = (unsigned int)(v4 + ((_DWORD)v3 << 6));
    *((_QWORD *)KiCpuSetAffinities + v7) = v6;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v7) = *(_QWORD *)(a1 + 1608);
    KiSystemAllowedCpuSets[v5] |= 1LL << v4;
    KiNonParkedCpuSets[v5] |= 1LL << v4;
    v8 = &PsInitialSystemProcess[2].ThreadSeed[4];
    if ( (HIDWORD(PsInitialSystemProcess[2].SwapListEntry.Next) & 0x200) != 0 )
      v8 = *(unsigned int **)v8;
    *(_QWORD *)&v8[2 * v5] |= 1LL << v4;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock(&KiCpuSetLock);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
