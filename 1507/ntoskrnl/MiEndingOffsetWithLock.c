/*
 * XREFs of MiEndingOffsetWithLock @ 0x140055090
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140036BC0 (MiFinishMdlForMappedFileFault.c)
 *     MiViewMayContainPage @ 0x1400FA970 (MiViewMayContainPage.c)
 *     MiReadyFlushMdlToWrite @ 0x14011A498 (MiReadyFlushMdlToWrite.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiEndingOffset @ 0x140055120 (MiEndingOffset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2);
  }
  else
  {
    _m_prefetchw(v2);
    v4 = *v2 & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange(v2, v4 + 1, v4) )
      ExpWaitForSpinLockSharedAndAcquire(v2);
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
