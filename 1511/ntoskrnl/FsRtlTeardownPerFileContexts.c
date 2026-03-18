/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1404ABCBC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  signed __int64 v1; // rbx
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rax
  __int64 **v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rtt
  signed __int64 v10; // rax
  unsigned __int64 v11; // rtt

  v1 = 0LL;
  v2 = (unsigned __int64 *)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v2 )
  {
    v3 = v2[3];
    if ( v3 )
    {
      (*(void (__fastcall **)(unsigned __int64))(v3 + 32))(v3);
      v2[3] = 0LL;
    }
    v4 = (__int64 **)(v2 + 1);
    if ( *v4 != (__int64 *)v4 )
    {
      FsRtlAcquirePushLockExclusive(v2);
      while ( *v4 != (__int64 *)v4 )
      {
        v5 = *v4;
        v6 = **v4;
        if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
          __fastfail(3u);
        *v4 = (__int64 *)v6;
        *(_QWORD *)(v6 + 8) = v4;
        _m_prefetchw(v2);
        v7 = *v2;
        v8 = *v2 - 16;
        if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v8 = 0LL;
        if ( (v7 & 2) != 0 || (v9 = *v2, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v8, v7)) )
          ExfReleasePushLock(v2);
        KeAbPostRelease((ULONG_PTR)v2);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ((void (__fastcall *)(__int64 *))v5[4])(v5);
        FsRtlAcquirePushLockExclusive(v2);
      }
      _m_prefetchw(v2);
      v10 = *v2;
      if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v1 = v10 - 16;
      if ( (v10 & 2) != 0 || (v11 = *v2, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v1, v10)) )
        ExfReleasePushLock(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExFreePoolWithTag(v2, 0x63665346u);
  }
}
