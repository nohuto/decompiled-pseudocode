/*
 * XREFs of ExpSaAllocatorAllocate @ 0x140133BCC
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x140133948 (ExpAllocateFannedOutPushLock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140133D5C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140133E38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x1401353D0 (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  char v3; // r12
  __int64 Memory; // rdi
  __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 *v8; // r14
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rbp
  __int64 *v17; // rcx

  v3 = 0;
  Memory = -1LL;
  v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v6, BugCheckParameter2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (__int64 *)(BugCheckParameter2 + 8);
  do
  {
    v8 = (__int64 *)*v7;
    if ( (__int64 *)*v7 != v7 )
    {
      while ( 1 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v8, a2);
        if ( Memory != -1 )
          break;
        v8 = (__int64 *)*v8;
        if ( v8 == v7 )
          goto LABEL_15;
      }
      if ( !*((_DWORD *)v8 + 9) )
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
LABEL_10:
      if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
      {
        if ( !v3 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
          goto LABEL_12;
        v3 = 1;
        ExpSaAllocatorOptimizeList(BugCheckParameter2);
      }
      if ( v3 )
        goto LABEL_22;
LABEL_12:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      goto LABEL_14;
    }
LABEL_15:
    v10 = (__int64 *)*v7;
    if ( !v3 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v15 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v15, BugCheckParameter2);
      if ( v16 )
        v16[26] |= 1u;
    }
    v3 = 1;
  }
  while ( v10 != (__int64 *)*v7 );
  v11 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v11) = v11 & 1;
  v12 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v11);
  v13 = v12;
  if ( v12 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v12, a2);
    if ( *(_DWORD *)(v13 + 36) )
    {
      *(_DWORD *)(v13 + 40) = 0;
      v14 = (__int64 *)*v7;
      if ( *(__int64 **)(*v7 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)v13 = v14;
      *(_QWORD *)(v13 + 8) = v7;
      v14[1] = v13;
      *v7 = v13;
    }
    else
    {
      *(_DWORD *)(v13 + 40) = 1;
      v17 = *(__int64 **)(BugCheckParameter2 + 32);
      if ( *v17 != BugCheckParameter2 + 24 )
        __fastfail(3u);
      *(_QWORD *)v13 = BugCheckParameter2 + 24;
      *(_QWORD *)(v13 + 8) = v17;
      *v17 = v13;
      *(_QWORD *)(BugCheckParameter2 + 32) = v13;
    }
    goto LABEL_10;
  }
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
LABEL_14:
  KeAbPostRelease(BugCheckParameter2);
  return Memory;
}
