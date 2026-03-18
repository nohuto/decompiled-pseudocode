/*
 * XREFs of MiFindLastSubsection @ 0x140082B4C
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1400834A8 (MiCanFileBeTruncatedInternal.c)
 *     MiComputeDataFlushRange @ 0x140085714 (MiComputeDataFlushRange.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFindLastSubsection(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  _DWORD *v8; // rdx
  signed __int32 v9; // ett
  volatile signed __int32 *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 1 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v8 = (_DWORD *)(a1 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72);
    }
    else
    {
      _m_prefetchw(v8);
      v9 = *v8 & 0x7FFFFFFF;
      if ( v9 != _InterlockedCompareExchange(v8, v9 + 1, v9) )
        ExpWaitForSpinLockSharedAndAcquire(v8);
    }
  }
  v4 = *(_QWORD *)(a1 + 232);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
  v6 = v5 - 56;
  if ( CurrentIrql != 17 )
  {
    v10 = (volatile signed __int32 *)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
    }
    else
    {
      _InterlockedAnd(v10, 0xBFFFFFFF);
      _InterlockedDecrement(v10);
    }
    __writecr8(CurrentIrql);
  }
  return v6;
}
