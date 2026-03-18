/*
 * XREFs of WdipSemAllocatePool @ 0x140504B84
 * Callers:
 *     WdipSemFastAllocate @ 0x140504B4C (WdipSemFastAllocate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // rcx
  ULONG_PTR v10; // rtt
  PVOID *PoolWithTag; // rax
  PVOID **v13; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = (a1 + 15) & 0xFFFFFFF0;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_140306230, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140306230, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_140306230, v5, (ULONG_PTR)&qword_140306230);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = dword_140306220;
  if ( v3 <= dword_140306220 )
  {
    v9 = qword_140306228;
LABEL_7:
    v4 = v9;
    qword_140306228 = v3 + v9;
    dword_140306220 = v8 - v3;
    goto LABEL_8;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
  if ( PoolWithTag )
  {
    v13 = (PVOID **)qword_140306218;
    *PoolWithTag = &WdipSemPool;
    PoolWithTag[1] = v13;
    if ( *v13 != &WdipSemPool )
      __fastfail(3u);
    *v13 = PoolWithTag;
    v8 = 4080;
    qword_140306218 = (__int64)PoolWithTag;
    v9 = (__int64)(PoolWithTag + 2);
    goto LABEL_7;
  }
LABEL_8:
  _m_prefetchw(&qword_140306230);
  if ( (qword_140306230 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_140306230 - 16;
  if ( (qword_140306230 & 2) != 0
    || (v10 = qword_140306230,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140306230, v2, qword_140306230)) )
  {
    ExfReleasePushLock(&qword_140306230);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140306230);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
