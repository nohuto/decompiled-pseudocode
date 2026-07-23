/*
 * XREFs of CmLockKeyForWrite @ 0x140575108
 * Callers:
 *     NtLockRegistryKey @ 0x140575050 (NtLockRegistryKey.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  __int64 v1; // r14
  char v3; // r12
  unsigned __int64 *v4; // rsi
  unsigned __int64 *v5; // r15
  signed __int32 v6; // eax
  signed __int32 v7; // ecx
  signed __int32 v8; // ett
  __int64 i; // rbx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v15; // rdi
  _BYTE *v16; // rax
  _BYTE *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 *PoolWithTag; // rax
  struct _KTHREAD *v26; // rax
  _BYTE *v27; // rax
  _BYTE *v28; // rbp
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  CmpLockKcbExclusive(v1);
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v11 = -1073741444;
LABEL_29:
    CmpUnlockKcb((char *)v1);
    return v11;
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    v12 = *((_DWORD *)CmpSiloMonitor + 5);
    CurrentServerSilo = PsGetCurrentServerSilo();
    PsGetPermanentSiloContext(CurrentServerSilo, v12, &v33);
    CurrentThread = KeGetCurrentThread();
    v5 = (unsigned __int64 *)v33;
    --CurrentThread->KernelApcDisable;
    v15 = (unsigned __int64 *)(v33 + 24);
    v16 = (_BYTE *)KeAbPreAcquire(v33 + 24, 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15);
    if ( v17 )
      v17[26] |= 1u;
    if ( *(_BYTE *)(v33 + 16) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
      return 3221225865LL;
    }
    v21 = *(unsigned __int64 **)v33;
    while ( v21 != (unsigned __int64 *)v33 )
    {
      v4 = v21;
      if ( v21[3] == v1 )
        break;
      v21 = (unsigned __int64 *)*v21;
      v4 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
    if ( !v4 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x33364D43u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v11 = -1073741670;
        goto LABEL_29;
      }
      *((_DWORD *)PoolWithTag + 4) = 0;
      v3 = 1;
      PoolWithTag[3] = v1;
    }
  }
  v6 = *(_DWORD *)v1;
  v7 = *(_DWORD *)v1 + 1;
  if ( *(_DWORD *)v1 == -1 )
  {
LABEL_32:
    CmpUnlockKcb((char *)v1);
    if ( v3 )
      ExFreePoolWithTag(v4, 0x33364D43u);
    return 3221225506LL;
  }
  else
  {
    while ( 1 )
    {
      v8 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)v1, v7, v6);
      if ( v8 == v6 )
        break;
      v7 = v6 + 1;
      if ( v6 == -1 )
        goto LABEL_32;
    }
    *(_WORD *)(v1 + 4) |= 0xA0u;
    if ( v4 )
    {
      ++*((_DWORD *)v4 + 4);
      if ( v3 )
      {
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        v27 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v5 + 3), 0LL, 0);
        v28 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v5 + 6, 0LL) )
          ExfAcquirePushLockExclusiveEx(v5 + 3, v27, (ULONG_PTR)(v5 + 3));
        if ( v28 )
          v28[26] |= 1u;
        v29 = *v5;
        if ( *(unsigned __int64 **)(*v5 + 8) != v5 )
          __fastfail(3u);
        *v4 = v29;
        v4[1] = (unsigned __int64)v5;
        *(_QWORD *)(v29 + 8) = v4;
        *v5 = (unsigned __int64)v4;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v5 + 3);
        KeAbPostRelease((ULONG_PTR)(v5 + 3));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
      }
    }
    CmpUnlockKcb((char *)v1);
    for ( i = *(_QWORD *)(v1 + 64); i && *(_QWORD *)(i + 24) != CmpMasterHive; i = *(_QWORD *)(i + 64) )
    {
      CmpLockKcbExclusive(i);
      *(_WORD *)(i + 4) |= 0x100u;
      CmpUnlockKcb((char *)i);
    }
    return 0LL;
  }
}
