/*
 * XREFs of EtwInitializeSiloState @ 0x140563728
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x14067EA44 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140007A98 (ExFreeCacheAwareRundownProtection.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404AD4D0 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpInitializeAutoLoggers @ 0x140563968 (EtwpInitializeAutoLoggers.c)
 */

__int64 __fastcall EtwInitializeSiloState(__int64 a1)
{
  PVOID PoolWithTag; // rax
  signed __int64 v3; // rbx
  __int64 v4; // rsi
  _WORD *v5; // r15
  _QWORD *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebp
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  volatile signed __int32 *v12; // r14
  __int64 v13; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rdx
  unsigned int i; // r8d
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PEX_RUNDOWN_REF_CACHE_AWARE *v25; // rbx
  __int64 v26; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x13A8uLL, 0x61777445u);
  v3 = 0LL;
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x13A8uLL);
    v5 = (_WORD *)(v4 + 5008);
    *(_WORD *)(v4 + 5008) = 3;
    v6 = (_QWORD *)(v4 + 1424);
    v7 = 64LL;
    do
    {
      v6[6] = 0LL;
      v8 = v6;
      v9 = 3LL;
      do
      {
        v8[1] = v8;
        *v8 = v8;
        v8 += 2;
        --v9;
      }
      while ( v9 );
      v6 += 7;
      --v7;
    }
    while ( v7 );
    v10 = 0;
    while ( 1 )
    {
      *(_QWORD *)(v4 + 8LL * v10 + 912) = 1LL;
      CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      *(_QWORD *)(v4 + 8LL * v10 + 400) = CacheAwareRundownProtection;
      if ( !CacheAwareRundownProtection )
        break;
      if ( ++v10 >= 0x40 )
      {
        v12 = (volatile signed __int32 *)(v4 + 384);
        *(_QWORD *)(v4 + 376) = v4;
        *(_QWORD *)(v4 + 384) = 0LL;
        *(GUID *)(v4 + 24) = SecurityProviderGuid;
        *((_QWORD *)PsGetServerSiloGlobals(a1) + 106) = v4;
        if ( PsIsHostSilo(a1) )
        {
          EtwpHostSiloState = v4;
          qword_1402F3210 = v4 + 912;
        }
        v13 = PsAttachSiloToCurrentThread(a1);
        EtwpInitializeAutoLoggers();
        PsDetachSiloFromCurrentThread(v13);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v15 = (_BYTE *)KeAbPreAcquire(v4 + 384, 0LL, 0);
        v16 = v15;
        if ( _interlockedbittestandset64(v12, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 384), v15, v4 + 384);
        if ( v16 )
          v16[26] |= 1u;
        v17 = v4 + 116;
        *(_QWORD *)(v4 + 392) = KeGetCurrentThread();
        for ( i = 0; i < 8; ++i )
        {
          if ( *v5 )
          {
            *(_WORD *)(v17 + 2) = *v5;
            *(_DWORD *)(v17 - 4) = 1;
            *(_BYTE *)v17 = -1;
            *(_QWORD *)(v17 + 12) = -1LL;
            *(_QWORD *)(v17 + 20) = 0LL;
            *(_DWORD *)(v17 + 4) = 64;
            *(_BYTE *)(v4 + 5024) |= 1 << i;
          }
          ++v5;
          v17 += 32LL;
        }
        *(_QWORD *)(v4 + 392) = 0LL;
        _m_prefetchw((const void *)v12);
        v19 = *(_QWORD *)v12;
        if ( (*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v3 = v19 - 16;
        if ( (v19 & 2) != 0
          || (v20 = *(_QWORD *)v12, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v3, v19)) )
        {
          ExfReleasePushLock((_QWORD *)(v4 + 384));
        }
        KeAbPostRelease(v4 + 384);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
        return 0LL;
      }
    }
    if ( v10 )
    {
      v25 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 400);
      v26 = v10;
      do
      {
        ExFreeCacheAwareRundownProtection(*v25++);
        --v26;
      }
      while ( v26 );
    }
    ExFreePoolWithTag((PVOID)v4, 0x61777445u);
  }
  return 3221225495LL;
}
