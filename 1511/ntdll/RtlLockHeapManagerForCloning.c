/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800DFE20
 * Callers:
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpHpHeapLock @ 0x18002D9C4 (RtlpHpHeapLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x180040378 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x1800510F0 (RtlTryEnterCriticalSection.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800E1A50 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800F3594 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // r14
  unsigned int v1; // ebx
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v4; // rdi
  int v5; // ebp
  _RTL_SRWLOCK *v7; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  RtlpSparseBitmapCtxLockExclusive((__int64)&RtlpHpLargeAllocationBitmap, (_RTL_SRWLOCK *)&RtlpHpLargeAllocationBitmap);
  v1 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v4 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v4 + 4) == -571548178 )
    {
      if ( (v4[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i]);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 17);
        RtlpHpLfhContextLockUnlock(v4 + 272, 0LL);
      }
    }
    else if ( (v4[112] & 1) == 0 )
    {
      v5 = 0;
      DelayInterval.QuadPart = -250000LL;
      while ( !RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)v4 + 44)) )
      {
        ZwDelayExecution(0, &DelayInterval);
        if ( (unsigned int)++v5 >= 0x64 )
        {
          v1 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v1;
        }
      }
      if ( v4[378] == 2 )
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)v4 + 46);
      else
        v7 = 0LL;
      if ( v7 )
        RtlAcquireSRWLockExclusive(v7);
    }
  }
  return v1;
}
