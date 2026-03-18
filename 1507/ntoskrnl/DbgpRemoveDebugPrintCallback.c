/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x1402467D0
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x140246644 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(void *a1)
{
  unsigned __int8 CurrentIrql; // bp
  int v3; // ett
  _UNKNOWN **i; // rdx
  volatile signed __int64 *v5; // rsi
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  volatile signed __int64 **v8; // rdx
  volatile signed __int64 **v9; // rax
  signed __int8 v10; // cf
  unsigned int v11; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&RtlpDebugPrintCallbackLock);
  }
  else
  {
    _m_prefetchw(&RtlpDebugPrintCallbackLock);
    v3 = RtlpDebugPrintCallbackLock & 0x7FFFFFFF;
    if ( v3 != _InterlockedCompareExchange(
                 &RtlpDebugPrintCallbackLock,
                 (RtlpDebugPrintCallbackLock & 0x7FFFFFFF) + 1,
                 RtlpDebugPrintCallbackLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&RtlpDebugPrintCallbackLock);
  }
  for ( i = (_UNKNOWN **)RtlpDebugPrintCallbackList; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpDebugPrintCallbackList )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&RtlpDebugPrintCallbackLock, retaddr);
      }
      else
      {
        _InterlockedAnd(&RtlpDebugPrintCallbackLock, 0xBFFFFFFF);
        _InterlockedDecrement(&RtlpDebugPrintCallbackLock);
      }
      __writecr8(CurrentIrql);
      return (unsigned int)-1073741275;
    }
    v5 = (volatile signed __int64 *)(i - 3);
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw((const void *)v5);
      if ( (_InterlockedOr((volatile signed __int32 *)v5, 1u) & 1) == 0 )
        break;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&RtlpDebugPrintCallbackLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&RtlpDebugPrintCallbackLock, 0xBFFFFFFF);
    _InterlockedDecrement(&RtlpDebugPrintCallbackLock);
  }
  v6 = _InterlockedCompareExchange64(v5 + 1, 1LL, 0LL);
  if ( v6 >= 2 )
    ExfWaitForRundownProtectionRelease(v5 + 1, v6);
  v7 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&RtlpDebugPrintCallbackLock);
  }
  else
  {
    v10 = _interlockedbittestandset(&RtlpDebugPrintCallbackLock, 0x1Fu);
    v11 = 0;
    if ( v10 )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(&RtlpDebugPrintCallbackLock);
    while ( (RtlpDebugPrintCallbackLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (RtlpDebugPrintCallbackLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(
          &RtlpDebugPrintCallbackLock,
          RtlpDebugPrintCallbackLock | 0x40000000,
          RtlpDebugPrintCallbackLock);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  v8 = (volatile signed __int64 **)*((_QWORD *)v5 + 3);
  v9 = (volatile signed __int64 **)*((_QWORD *)v5 + 4);
  if ( v8[1] != v5 + 3 || *v9 != v5 + 3 )
    __fastfail(3u);
  *v9 = (volatile signed __int64 *)v8;
  v8[1] = (volatile signed __int64 *)v9;
  if ( v9 == v8 )
    RtlpDebugPrintCallbacksActive = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&RtlpDebugPrintCallbackLock, retaddr);
  else
    RtlpDebugPrintCallbackLock = 0;
  __writecr8(CurrentIrql);
  ExFreePoolWithTag((PVOID)v5, 0);
  return v7;
}
