/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14015BAD0
 * Callers:
 *     ExSaAllocate @ 0x14015BA4C (ExSaAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14015BC00 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14015BCDC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x1402661EC (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  __int64 Memory; // rdi
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 *v10; // r15
  __int64 *v11; // r14
  _QWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 *v22; // rcx

  v5 = 0;
  Memory = -1LL;
  v8 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v8, BugCheckParameter2, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = (__int64 *)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    v11 = (__int64 *)*v10;
    if ( (__int64 *)*v10 != v10 )
      break;
LABEL_7:
    v12 = (_QWORD *)*v10;
    if ( !v5 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v19 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, v18);
      v21 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v19, BugCheckParameter2, v20);
      if ( v21 )
        *(_BYTE *)(v21 + 26) |= 1u;
    }
    v5 = 1;
    if ( v12 == (_QWORD *)*v10 )
    {
      v13 = *(unsigned int *)(BugCheckParameter2 + 64);
      LOBYTE(v13) = v13 & 1;
      v14 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v13);
      v15 = v14;
      if ( v14 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v14, a2);
        if ( *(_DWORD *)(v15 + 36) )
        {
          *(_DWORD *)(v15 + 40) = 0;
          v16 = (_QWORD *)*v10;
          *(_QWORD *)v15 = *v10;
          *(_QWORD *)(v15 + 8) = v10;
          if ( (__int64 *)v16[1] != v10 )
            __fastfail(3u);
          v16[1] = v15;
          *v10 = v15;
        }
        else
        {
          *(_DWORD *)(v15 + 40) = 1;
          v22 = *(__int64 **)(BugCheckParameter2 + 32);
          *(_QWORD *)v15 = BugCheckParameter2 + 24;
          *(_QWORD *)(v15 + 8) = v22;
          if ( *v22 != BugCheckParameter2 + 24 )
            __fastfail(3u);
          *v22 = v15;
          *(_QWORD *)(BugCheckParameter2 + 32) = v15;
        }
        goto LABEL_14;
      }
LABEL_16:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      goto LABEL_18;
    }
  }
  while ( 1 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v11, a2);
    if ( Memory != -1 )
      break;
    v11 = (__int64 *)*v11;
    if ( v11 == v10 )
      goto LABEL_7;
  }
  if ( !*((_DWORD *)v11 + 9) )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
LABEL_14:
  if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
  {
    if ( !v5 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
      goto LABEL_38;
    v5 = 1;
    ExpSaAllocatorOptimizeList(BugCheckParameter2);
  }
  if ( v5 )
    goto LABEL_16;
LABEL_38:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
LABEL_18:
  KeAbPostRelease(BugCheckParameter2);
  return Memory;
}
