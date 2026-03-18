/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1403FA7E0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_DWORD *CmpAllocateKeyControlBlock()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int8 v6; // di
  signed __int32 v7; // eax
  _DWORD *result; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r9
  unsigned __int16 i; // r8
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 **v14; // rcx

  _InterlockedIncrement64(&CmPerfCounters);
  if ( CmpAllocInited )
  {
    v0 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0LL);
    v1 = v0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, v0);
    if ( v1 )
      *(_BYTE *)(v1 + 26) |= 1u;
    *(&CmpAllocBucketLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpAllocBucketLock + 12) = CurrentIrql;
    while ( 1 )
    {
      v3 = CmpFreeKCBListHead;
      if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
        break;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6C414D43u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpAllocBucketLock);
        goto LABEL_22;
      }
      _InterlockedIncrement64(&qword_1406FC030);
      *PoolWithTag = 13;
      for ( i = 0; i < 0xDu; ++i )
      {
        v12 = 74LL * i;
        v13 = (__int64 *)&v10[v12 + 32];
        v10[v12 + 3] |= 0x10000u;
        v14 = (__int64 **)qword_1402FD6A8;
        *v13 = (__int64)&CmpFreeKCBListHead;
        v13[1] = (__int64)v14;
        if ( *v14 != &CmpFreeKCBListHead )
          __fastfail(3u);
        *v14 = v13;
        qword_1402FD6A8 = (__int64)&v10[v12 + 32];
        _InterlockedIncrement64(&qword_1406FC038);
      }
    }
    v4 = *(_QWORD *)CmpFreeKCBListHead;
    if ( *(__int64 **)(CmpFreeKCBListHead + 8) != &CmpFreeKCBListHead || *(_QWORD *)(v4 + 8) != CmpFreeKCBListHead )
      __fastfail(3u);
    CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
    *(_QWORD *)(v4 + 8) = &CmpFreeKCBListHead;
    v5 = v3 - 120;
    --*(_DWORD *)((v3 - 120) & 0xFFFFFFFFFFFFF000uLL);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v6 = *((_BYTE *)&CmpAllocBucketLock + 48);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v7 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v7);
    __writecr8(v6);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
    _InterlockedIncrement64(&qword_1406FC040);
    _InterlockedDecrement64(&qword_1406FC038);
    return (_DWORD *)v5;
  }
  else
  {
LABEL_22:
    result = ExAllocatePoolWithTag(PagedPool, 0x128uLL, 0x626B4D43u);
    if ( result )
      result[1] &= ~0x10000u;
  }
  return result;
}
