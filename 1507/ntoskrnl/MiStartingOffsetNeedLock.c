/*
 * XREFs of MiStartingOffsetNeedLock @ 0x140055170
 * Callers:
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiStartingOffsetNeedLock(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax
  __int64 v7; // rbx
  signed __int32 v8; // ett
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2 + 72);
    }
    else
    {
      _m_prefetchw((const void *)(v2 + 72));
      v8 = *(_DWORD *)(v2 + 72) & 0x7FFFFFFF;
      if ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 72), v8 + 1, v8) )
        ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v2 + 72));
    }
  }
  result = MiStartingOffset(a1, a1[1], a2);
  v7 = result;
  if ( CurrentIrql != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2 + 72, retaddr);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v2 + 72), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 72));
    }
    __writecr8(CurrentIrql);
    return v7;
  }
  return result;
}
