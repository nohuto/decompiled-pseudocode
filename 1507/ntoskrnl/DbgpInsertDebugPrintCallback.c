/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x14024668C
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x140246644 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  _UNKNOWN ***v6; // rcx
  unsigned int v7; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436244u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = 0LL;
  *(_DWORD *)PoolWithTag = 0;
  PoolWithTag[2] = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&RtlpDebugPrintCallbackLock);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(&RtlpDebugPrintCallbackLock, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(&RtlpDebugPrintCallbackLock);
    while ( (RtlpDebugPrintCallbackLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (RtlpDebugPrintCallbackLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(
          &RtlpDebugPrintCallbackLock,
          RtlpDebugPrintCallbackLock | 0x40000000,
          RtlpDebugPrintCallbackLock);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  v6 = (_UNKNOWN ***)off_140320AF0[0];
  v3[4] = off_140320AF0[0];
  v3[3] = &RtlpDebugPrintCallbackList;
  if ( *v6 != &RtlpDebugPrintCallbackList )
    __fastfail(3u);
  *v6 = (_UNKNOWN **)(v3 + 3);
  off_140320AF0[0] = (_UNKNOWN **)(v3 + 3);
  RtlpDebugPrintCallbacksActive = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&RtlpDebugPrintCallbackLock, retaddr);
  else
    RtlpDebugPrintCallbackLock = 0;
  __writecr8(CurrentIrql);
  return 0LL;
}
