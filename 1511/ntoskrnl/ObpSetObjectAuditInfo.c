/*
 * XREFs of ObpSetObjectAuditInfo @ 0x14062E334
 * Callers:
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, void *a2)
{
  signed __int64 v4; // rbx
  _QWORD *v6; // rsi
  SIZE_T v7; // r15
  PVOID PoolWithTag; // rax
  void *v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  signed __int64 v14; // rax
  unsigned __int64 v15; // rtt
  signed __int64 v16; // rax
  unsigned __int64 v17; // rtt

  v4 = 0LL;
  if ( !RtlValidSecurityDescriptor(a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    v6 = (_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F]);
  else
    v6 = 0LL;
  if ( v6 && !*v6 )
  {
    v7 = RtlLengthSecurityDescriptor(a2);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x4941624Fu);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, a2, v7);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (unsigned __int64 *)(a1 + 16);
    v12 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( *v6 )
    {
      _m_prefetchw(v11);
      v14 = *v11;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v4 = v14 - 16;
      if ( (v14 & 2) != 0 || (v15 = *v11, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v4, v14)) )
        ExfReleasePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      *v6 = v9;
      _m_prefetchw(v11);
      v16 = *v11;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v4 = v16 - 16;
      if ( (v16 & 2) != 0 || (v17 = *v11, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v4, v16)) )
        ExfReleasePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
    }
  }
  return 0LL;
}
