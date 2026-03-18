/*
 * XREFs of CmLockKcbForWrite @ 0x140541740
 * Callers:
 *     NtLockRegistryKey @ 0x14054167C (NtLockRegistryKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmLockKcbForWrite(char *P)
{
  char v2; // r12
  _QWORD *v3; // rdi
  _QWORD *v4; // r15
  signed __int32 v5; // eax
  signed __int32 v6; // ecx
  signed __int32 v7; // ett
  __int64 i; // rbx
  unsigned int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 *v15; // rax
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 *v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  CmpLockKcbExclusive((__int64)P);
  if ( (*((_DWORD *)P + 1) & 0x20000) != 0 )
  {
    v10 = -1073741444;
LABEL_29:
    CmpUnlockKcb(P);
    return v10;
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    PsGetMonitorContextServerSilo(CmpSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v21);
    CurrentThread = KeGetCurrentThread();
    v4 = v21;
    --CurrentThread->KernelApcDisable;
    v12 = (unsigned __int64 *)(v21 + 3);
    v13 = KeAbPreAcquire((ULONG_PTR)(v21 + 3), 0LL, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v13, (ULONG_PTR)v12);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    if ( *((_BYTE *)v21 + 16) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 3221225865LL;
    }
    v15 = (__int64 *)*v21;
    while ( v15 != v21 )
    {
      v3 = v15;
      if ( (char *)v15[3] == P )
        break;
      v15 = (__int64 *)*v15;
      v3 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v3 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x33364D43u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
        goto LABEL_29;
      }
      *((_DWORD *)PoolWithTag + 4) = 0;
      v2 = 1;
      PoolWithTag[3] = P;
    }
  }
  v5 = *(_DWORD *)P;
  v6 = *(_DWORD *)P + 1;
  if ( *(_DWORD *)P == -1 )
  {
LABEL_32:
    CmpUnlockKcb(P);
    if ( v2 )
      ExFreePoolWithTag(v3, 0x33364D43u);
    return 3221225506LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)P, v6, v5);
      if ( v7 == v5 )
        break;
      v6 = v5 + 1;
      if ( v5 == -1 )
        goto LABEL_32;
    }
    *((_WORD *)P + 2) |= 0xA0u;
    if ( v3 )
    {
      ++*((_DWORD *)v3 + 4);
      if ( v2 )
      {
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v18 = KeAbPreAcquire((ULONG_PTR)(v4 + 3), 0LL, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v4 + 6, 0LL) )
          ExfAcquirePushLockExclusiveEx(v4 + 3, v18, (ULONG_PTR)(v4 + 3));
        if ( v19 )
          *(_BYTE *)(v19 + 26) |= 1u;
        v20 = *v4;
        *v3 = *v4;
        v3[1] = v4;
        if ( *(_QWORD **)(v20 + 8) != v4 )
          __fastfail(3u);
        *(_QWORD *)(v20 + 8) = v3;
        *v4 = v3;
        if ( (_InterlockedExchangeAdd64(v4 + 3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v4 + 3);
        KeAbPostRelease((ULONG_PTR)(v4 + 3));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    CmpUnlockKcb(P);
    for ( i = *((_QWORD *)P + 9); i && *(_QWORD *)(i + 32) != CmpMasterHive; i = *(_QWORD *)(i + 72) )
    {
      CmpLockKcbExclusive(i);
      *(_WORD *)(i + 4) |= 0x100u;
      CmpUnlockKcb((char *)i);
    }
    return 0LL;
  }
}
