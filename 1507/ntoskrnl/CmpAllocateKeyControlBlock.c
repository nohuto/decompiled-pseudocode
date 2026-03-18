/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1404CBB90
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall CmpAllocateKeyControlBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  _DWORD *result; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r9
  unsigned __int16 i; // r8
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 **v18; // rcx
  unsigned __int8 v19; // bl
  signed __int32 v20; // eax

  _InterlockedIncrement64(&CmPerfCounters);
  if ( CmpAllocInited )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0LL, a4);
    v5 = v4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, v4);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    qword_14034DB28 = (__int64)KeGetCurrentThread();
    dword_14034DB50 = CurrentIrql;
    while ( 1 )
    {
      v7 = CmpFreeKCBListHead;
      if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
      {
        v8 = *(_QWORD *)CmpFreeKCBListHead;
        if ( *(__int64 **)(CmpFreeKCBListHead + 8) != &CmpFreeKCBListHead || *(_QWORD *)(v8 + 8) != CmpFreeKCBListHead )
          __fastfail(3u);
        CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
        *(_QWORD *)(v8 + 8) = &CmpFreeKCBListHead;
        v9 = v7 - 120;
        --*(_DWORD *)((v7 - 120) & 0xFFFFFFFFFFFFF000uLL);
        qword_14034DB28 = 0LL;
        v10 = dword_14034DB50;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
        if ( v11 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v11);
        __writecr8(v10);
        KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
        _InterlockedIncrement64(&qword_14077F060);
        _InterlockedDecrement64(&qword_14077F058);
        return (_DWORD *)v9;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6C414D43u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      _InterlockedIncrement64(&qword_14077F050);
      *PoolWithTag = 13;
      for ( i = 0; i < 0xDu; ++i )
      {
        v16 = 74LL * i;
        v17 = (__int64 *)&v14[v16 + 32];
        v14[v16 + 3] |= 0x10000u;
        v18 = (__int64 **)qword_14034DB08;
        *v17 = (__int64)&CmpFreeKCBListHead;
        v17[1] = (__int64)v18;
        if ( *v18 != &CmpFreeKCBListHead )
          __fastfail(3u);
        *v18 = v17;
        qword_14034DB08 = (__int64)&v14[v16 + 32];
        _InterlockedIncrement64(&qword_14077F058);
      }
    }
    v19 = dword_14034DB50;
    qword_14034DB28 = 0LL;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v20 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v20);
    __writecr8(v19);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
  }
  result = ExAllocatePoolWithTag(PagedPool, 0x128uLL, 0x626B4D43u);
  if ( result )
    result[1] &= ~0x10000u;
  return result;
}
