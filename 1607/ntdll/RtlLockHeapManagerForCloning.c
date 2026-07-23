/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800E9100
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapLock @ 0x18001E6A8 (RtlpHpHeapLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x18004E810 (RtlTryEnterCriticalSection.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF40 (RtlpSparseBitmapCtxLockExclusive.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAD28 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800FCC54 (RtlpHpLfhContextLockUnlock.c)
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
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 18);
        RtlpHpLfhContextLockUnlock(v4 + 288, 0LL);
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
      if ( v4[386] == 2 )
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)v4 + 47);
      else
        v7 = 0LL;
      if ( v7 )
        RtlAcquireSRWLockExclusive(v7);
    }
  }
  return v1;
}
