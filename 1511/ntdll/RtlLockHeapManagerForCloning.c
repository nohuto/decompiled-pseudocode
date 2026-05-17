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
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // ebx
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v6; // rdi
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebp
  char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v15; // rcx

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  RtlpSparseBitmapCtxLockExclusive((__int64)&RtlpHpLargeAllocationBitmap, (char *)&RtlpHpLargeAllocationBitmap, v1, v2);
  v3 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v6 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v6 + 4) == -571548178 )
    {
      if ( (v6[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i]);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v6 + 136), v7, v8, v9);
        RtlpHpLfhContextLockUnlock(v6 + 272, 0LL);
      }
    }
    else if ( (v6[112] & 1) == 0 )
    {
      v10 = 0;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v6 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v10 >= 0x64 )
        {
          v3 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v3;
        }
      }
      if ( v6[378] == 2 )
        v15 = *((_QWORD *)v6 + 46);
      else
        v15 = 0LL;
      if ( v15 )
        RtlAcquireSRWLockExclusive(v15, v11, v12, v13);
    }
  }
  return v3;
}
