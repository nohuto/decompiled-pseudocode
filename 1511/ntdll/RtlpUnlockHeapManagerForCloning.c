/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x1800E1A50
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E067C (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x180040358 (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpHpHeapUnlock @ 0x18005AFDC (RtlpHpHeapUnlock.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800F3594 (RtlpHpLfhContextLockUnlock.c)
 */

NTSTATUS __fastcall RtlpUnlockHeapManagerForCloning(int a1, unsigned int a2)
{
  struct _PEB *v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  int v7; // edx
  _RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = NtCurrentPeb();
  if ( a2 )
  {
    v4 = 0LL;
    v5 = a2;
    do
    {
      v6 = (__int64)v2->ProcessHeaps[v4];
      if ( *(_DWORD *)(v6 + 16) == -571548178 )
      {
        if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
        {
          if ( a1 )
          {
            *(_QWORD *)(v6 + 136) = 1LL;
            v7 = 2;
          }
          else
          {
            v7 = 0;
          }
          RtlpHpLfhContextLockUnlock(v6 + 272, v7 | 1u);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 136));
          RtlpHpHeapUnlock(v6, a1);
        }
      }
      else if ( (*(_BYTE *)(v6 + 112) & 1) == 0 )
      {
        if ( *(_BYTE *)(v6 + 378) == 2 )
          v8 = *(_RTL_SRWLOCK **)(v6 + 368);
        else
          v8 = 0LL;
        if ( v8 )
        {
          if ( a1 )
            v8->Value = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
        if ( a1 )
        {
          v9 = *(_QWORD *)(v6 + 352);
          *(_WORD *)(v6 + 376) = 0;
          *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v9 + 8) = -2;
          *(_DWORD *)(v9 + 12) = 1;
          *(_QWORD *)(v9 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 352));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    RtlpProcessHeapsListLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    RtlpProcessHeapsListLock.LockCount = -2;
    RtlpProcessHeapsListLock.RecursionCount = 1;
    RtlpProcessHeapsListLock.LockSemaphore = 0LL;
  }
  v10 = RtlpHpLargeAllocationBitmap;
  if ( (_BYTE)a1 )
    v10 = 1LL;
  RtlpHpLargeAllocationBitmap = v10;
  RtlpSparseBitmapCtxUnlockExclusive(
    (__int64)&RtlpHpLargeAllocationBitmap,
    (_RTL_SRWLOCK *)&RtlpHpLargeAllocationBitmap);
  return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
}
