/*
 * XREFs of MiEndingOffsetWithLock @ 0x14007C7F0
 * Callers:
 *     MiViewMayContainPage @ 0x140008570 (MiViewMayContainPage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400AB060 (MiFinishMdlForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x1400E3ACC (MiReadyFlushMdlToWrite.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 * Callees:
 *     MiEndingOffset @ 0x14007C880 (MiEndingOffset.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1)
{
  _DWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v4; // ett
  __int64 v5; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  else
  {
    _m_prefetchw(v2);
    v4 = *v2 & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange(v2, v4 + 1, v4) )
      ExpWaitForSpinLockSharedAndAcquire(v2, CurrentIrql);
  }
  v5 = MiEndingOffset(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  __writecr8(CurrentIrql);
  return v5;
}
