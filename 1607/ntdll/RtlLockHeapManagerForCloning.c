/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800E9040
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4250 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapLock @ 0x18001E6B8 (RtlpHpHeapLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x18004E820 (RtlTryEnterCriticalSection.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF50 (RtlpSparseBitmapCtxLockExclusive.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAC68 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800FCC54 (RtlpHpLfhContextLockUnlock.c)
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
  RtlpSparseBitmapCtxLockExclusive((__int64)RtlpHpLargeAllocationBitmap, (char *)RtlpHpLargeAllocationBitmap, v1, v2);
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
        RtlAcquireSRWLockExclusive((unsigned __int64)(v6 + 144), v7, v8, v9);
        RtlpHpLfhContextLockUnlock(v6 + 288, 0LL);
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
      if ( v6[386] == 2 )
        v15 = *((_QWORD *)v6 + 47);
      else
        v15 = 0LL;
      if ( v15 )
        RtlAcquireSRWLockExclusive(v15, v11, v12, v13);
    }
  }
  return v3;
}
