/*
 * XREFs of DbgEnumerateCallback @ 0x14015DA6C
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall DbgEnumerateCallback(struct _EX_RUNDOWN_REF **a1)
{
  int v2; // ett
  struct _EX_RUNDOWN_REF *Count; // rbx
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // rtt
  unsigned __int64 v8; // rtt
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&RtlpDebugPrintCallbackLock);
  }
  else
  {
    _m_prefetchw(&RtlpDebugPrintCallbackLock);
    v2 = RtlpDebugPrintCallbackLock & 0x7FFFFFFF;
    if ( v2 != _InterlockedCompareExchange(
                 &RtlpDebugPrintCallbackLock,
                 (RtlpDebugPrintCallbackLock & 0x7FFFFFFF) + 1,
                 RtlpDebugPrintCallbackLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&RtlpDebugPrintCallbackLock);
  }
  Count = *a1;
  if ( *a1 )
  {
    v4 = *a1;
  }
  else
  {
    Count = (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList;
    v4 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    if ( Count == (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList )
      break;
    _m_prefetchw(&Count[-2]);
    v7 = Count[-2].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)&Count[-2], v7 + 2, v7)
      || ExfAcquireRundownProtection(Count - 2) )
    {
      v5 = Count[-1].Count;
      *a1 = Count;
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
  if ( v4 )
  {
    _m_prefetchw(&v4[-2]);
    v8 = v4[-2].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&v4[-2], v8 - 2, v8) )
      ExfReleaseRundownProtection(v4 - 2);
  }
  return v5;
}
