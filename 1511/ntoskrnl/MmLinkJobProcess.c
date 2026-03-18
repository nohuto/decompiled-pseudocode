/*
 * XREFs of MmLinkJobProcess @ 0x1403E80C0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MmLinkJobProcess(__int64 a1, __int64 a2)
{
  int inserted; // r12d
  __int64 v4; // r13
  unsigned __int64 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r13
  _QWORD *PoolWithTag; // rax
  __int64 ***v12; // rax
  __int64 ***v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rsi
  __int64 v19; // r14
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 i; // rsi
  __int64 *v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v26; // [rsp+28h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+48h]

  inserted = 0;
  v26 = &v25;
  v25 = (__int64 *)&v25;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a2 + 1896);
  v6 = KeAbPreAcquire(a2 + 1896, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (*(_DWORD *)(a2 + 1724) & 0x40) == 0 )
  {
    v8 = (_QWORD *)(a2 + 1904);
    v9 = *(_QWORD **)(a2 + 1904);
    if ( v9 != (_QWORD *)(a2 + 1904) )
    {
      while ( 1 )
      {
        v10 = v9[2];
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6E53694Du);
        if ( !PoolWithTag )
          break;
        PoolWithTag[7] = v10;
        PoolWithTag[4] = *(v9 - 1);
        v12 = (__int64 ***)(PoolWithTag + 5);
        v13 = (__int64 ***)v26;
        *v12 = &v25;
        v12[1] = (__int64 **)v13;
        if ( *v13 != &v25 )
          __fastfail(3u);
        *v13 = (__int64 **)v12;
        v26 = (__int64 **)v12;
        v9 = (_QWORD *)*v9;
        if ( v9 == v8 )
          goto LABEL_10;
      }
      inserted = -1073741670;
LABEL_10:
      v4 = a1;
    }
    while ( (_QWORD *)*v8 != v8 )
      MiRemoveSharedCommitNode(*(_QWORD *)(*v8 + 16LL), a2, 1LL);
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v22 = v25;
        if ( v25 == (__int64 *)&v25 )
          break;
        v23 = (__int64 *)*v25;
        if ( (__int64 **)v25[1] != &v25 || (__int64 *)v23[1] != v25 )
          __fastfail(3u);
        v25 = (__int64 *)*v25;
        v23[1] = (__int64)&v25;
        ExFreePoolWithTag(v22 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 1724) & 0x20) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 1724), 0x20u);
    }
  }
  v14 = *(_QWORD **)(v4 + 48);
  v15 = a2 + 1136;
  *(_QWORD *)(a2 + 1136) = v4 + 40;
  *(_QWORD *)(a2 + 1144) = v14;
  if ( *v14 != v4 + 40 )
    __fastfail(3u);
  *v14 = v15;
  *(_QWORD *)(v4 + 48) = v15;
  *(_QWORD *)(a2 + 944) = v4;
  while ( 1 )
  {
    v16 = v25;
    if ( v25 == (__int64 *)&v25 )
      break;
    v17 = (__int64 *)*v25;
    if ( (__int64 **)v25[1] != &v25 || (__int64 *)v17[1] != v25 )
      __fastfail(3u);
    v25 = (__int64 *)*v25;
    v17[1] = (__int64)&v25;
    v18 = v16 - 5;
    if ( inserted >= 0 )
    {
      v19 = v18[7];
      if ( v18[4] )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v19, a2, 1LL);
          if ( inserted < 0 )
            break;
        }
        while ( v18[4]-- != 1 );
      }
    }
    ExFreePoolWithTag(v18, 0);
  }
  if ( inserted < 0 )
  {
    for ( i = a2 + 1904; *(_QWORD *)i != i; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)i + 16LL), a2, 1LL) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1724), 0xFFFFFFDF);
    _InterlockedOr((volatile signed __int32 *)(a2 + 1724), 0x40u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
