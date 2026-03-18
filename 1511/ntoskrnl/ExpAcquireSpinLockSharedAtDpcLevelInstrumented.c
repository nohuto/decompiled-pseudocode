/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C
 * Callers:
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAddTagForBigPages @ 0x140041A10 (ExpAddTagForBigPages.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiEndingOffsetWithLock @ 0x14007C7F0 (MiEndingOffsetWithLock.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiInitializeProbePacketVm @ 0x1400D5990 (MiInitializeProbePacketVm.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14021086C (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  char v6; // si
  unsigned __int64 v7; // rax
  int InterruptCount; // r14d
  int v9; // ebp
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rax
  int v14; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  LOBYTE(a3) = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v7) << 32;
    v9 = v7;
  }
  else
  {
    v9 = v14;
    v6 = 0;
    InterruptCount = v14;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  _m_prefetchw(a1);
  v11 = *a1 & 0x7FFFFFFF;
  v10 = _InterlockedCompareExchange(a1, v11 + 1, v11);
  if ( v11 != v10 )
  {
    LOBYTE(a2) = a3;
    v10 = ExpWaitForSpinLockSharedAndAcquire(a1, a2, a3);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v10;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v10;
  }
  if ( v6 )
  {
    v12 = __rdtsc();
    LOBYTE(v10) = PerfLogSpinLockAcquire((__int64)a1, v12, v12 - v9, v4, InterruptCount, 2);
  }
  return v10;
}
