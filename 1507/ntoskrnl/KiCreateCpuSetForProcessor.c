/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x1403F9A50
 * Callers:
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 *     KiAllocateCpuSetData @ 0x1407D36D0 (KiAllocateCpuSetData.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlWriteAcquireTickLock @ 0x140139E40 (RtlWriteAcquireTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x140139F44 (RtlWriteReleaseTickLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rsi
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int *v8; // rdx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v3 = *(unsigned __int8 *)(a1 + 1616);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiCpuSetLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiCpuSetLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiCpuSetLock);
    }
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v4 = *(unsigned __int8 *)(a1 + 1617);
    ++KiCpuSetCount[v3];
    v5 = v3;
    v6 = *(_QWORD *)(a1 + 1608);
    ++KiTotalCpuSetCount;
    v7 = (unsigned int)(v4 + ((_DWORD)v3 << 6));
    *((_QWORD *)KiCpuSetAffinities + v7) = v6;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v7) = *(_QWORD *)(a1 + 1608);
    KiSystemAllowedCpuSets[v5] |= 1LL << v4;
    KiNonParkedCpuSets[v5] |= 1LL << v4;
    v8 = &PsInitialSystemProcess[2].ThreadSeed[8];
    if ( (HIDWORD(PsInitialSystemProcess[2].ReadyListHead.Blink) & 0x200) != 0 )
      v8 = *(unsigned int **)v8;
    *(_QWORD *)&v8[2 * v5] |= 1LL << v4;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiCpuSetLock, retaddr);
    else
      _InterlockedAnd64(&KiCpuSetLock, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
