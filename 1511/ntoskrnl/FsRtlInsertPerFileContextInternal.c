/*
 * XREFs of FsRtlInsertPerFileContextInternal @ 0x1400F1BB0
 * Callers:
 *     FsRtlInsertReservedPerFileContext @ 0x1400F1BA8 (FsRtlInsertReservedPerFileContext.c)
 *     FsRtlInsertPerFileContext @ 0x1401AD950 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlInsertPerFileContextInternal(volatile signed __int64 *a1, _QWORD *a2, char a3)
{
  signed __int64 v3; // rbx
  __int64 *v7; // rdi
  __int64 *PoolWithTag; // rax
  _QWORD *v9; // rax
  signed __int64 v10; // rbp
  __int64 v12; // rcx
  signed __int64 v13; // rax
  __int64 v14; // rtt

  v3 = 0LL;
  if ( !a1 )
    return 3221225488LL;
  v7 = (__int64 *)_InterlockedCompareExchange64(a1, 0LL, 0LL);
  if ( !v7 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x63665346u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0LL;
    v9 = PoolWithTag + 1;
    v9[1] = v9;
    *v9 = v9;
    v7[3] = 0LL;
    v10 = _InterlockedCompareExchange64(a1, (signed __int64)v7, 0LL);
    if ( v10 )
    {
      ExFreePoolWithTag(v7, 0x63665346u);
      v7 = (__int64 *)v10;
    }
  }
  if ( a3 )
  {
    v7[3] = (__int64)a2;
  }
  else
  {
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)v7);
    v12 = v7[1];
    *a2 = v12;
    a2[1] = v7 + 1;
    if ( *(__int64 **)(v12 + 8) != v7 + 1 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 8) = a2;
    v7[1] = (__int64)a2;
    _m_prefetchw(v7);
    v13 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v13 - 16;
    if ( (v13 & 2) != 0 || (v14 = *v7, v14 != _InterlockedCompareExchange64(v7, v3, v13)) )
      ExfReleasePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
