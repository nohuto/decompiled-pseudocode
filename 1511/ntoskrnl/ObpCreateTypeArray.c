/*
 * XREFs of ObpCreateTypeArray @ 0x14062EBF4
 * Callers:
 *     ObEnumerateObjectsByType @ 0x14062E4C0 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x14062E584 (ObGetObjectInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall ObpCreateTypeArray(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  signed __int64 v6; // rbx
  _QWORD *v7; // rax
  _DWORD *v8; // r15
  int v9; // ebp
  _DWORD *PoolWithTag; // rax
  int v11; // ebp
  _QWORD *v12; // r14
  signed __int64 v13; // rax
  unsigned __int64 v14; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (unsigned __int64 *)(a1 + 23);
  v4 = KeAbPreAcquire((ULONG_PTR)(a1 + 23), 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  v6 = 0LL;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = *a1;
  v8 = 0LL;
  v9 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v7 = (_QWORD *)*v7;
      ++v9;
    }
    while ( v7 != a1 );
    if ( v9 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(v9 - 1) + 16, 0x7241624Fu);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v9;
        v11 = 0;
        v12 = *a1;
        while ( v12 != a1 )
        {
          *(_QWORD *)&v8[2 * v11 + 2] = v12;
          if ( !ObReferenceObjectSafe((__int64)(v12 + 10)) )
            *(_QWORD *)&v8[2 * v11 + 2] = 0LL;
          v12 = (_QWORD *)*v12;
          ++v11;
        }
      }
    }
  }
  _m_prefetchw(v3);
  v13 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v13 - 16;
  if ( (v13 & 2) != 0 || (v14 = *v3, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v6, v13)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v8;
}
