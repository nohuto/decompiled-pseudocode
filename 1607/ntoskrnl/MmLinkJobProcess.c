/*
 * XREFs of MmLinkJobProcess @ 0x1404D6388
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MmLinkJobProcess(__int64 a1, unsigned __int64 a2)
{
  int v2; // r13d
  __int64 v4; // r12
  unsigned __int64 *v5; // r15
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r12
  _QWORD *PoolWithTag; // rax
  __int64 ***v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  int inserted; // r15d
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 *v19; // r13
  __int64 v20; // r14
  __int64 *v23; // rax
  __int64 *v24; // rcx
  unsigned __int64 i; // rsi
  __int64 *v26; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v27; // [rsp+28h] [rbp-8h]
  int v29; // [rsp+78h] [rbp+48h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+50h]

  v2 = 0;
  v27 = &v26;
  v29 = 0;
  v26 = (__int64 *)&v26;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a2 + 1912);
  v6 = (_BYTE *)KeAbPreAcquire(a2 + 1912, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    v7[26] |= 1u;
  if ( (*(_DWORD *)(a2 + 1740) & 0x40) == 0 )
  {
    v8 = (_QWORD *)(a2 + 1920);
    v9 = *(_QWORD **)(a2 + 1920);
    if ( v9 != (_QWORD *)(a2 + 1920) )
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
        v13 = v27;
        if ( *v27 != (__int64 *)&v26 )
          __fastfail(3u);
        v12[1] = v27;
        *v12 = &v26;
        *v13 = v12;
        v27 = (__int64 **)v12;
        v9 = (_QWORD *)*v9;
        if ( v9 == v8 )
          goto LABEL_10;
      }
      v2 = -1073741670;
      v29 = -1073741670;
LABEL_10:
      v4 = a1;
    }
    while ( (_QWORD *)*v8 != v8 )
      MiRemoveSharedCommitNode(*(_QWORD *)(*v8 + 16LL), a2, 1);
    if ( v2 < 0 )
    {
      while ( 1 )
      {
        v23 = v26;
        if ( v26 == (__int64 *)&v26 )
          break;
        v24 = (__int64 *)*v26;
        if ( (__int64 **)v26[1] != &v26 || (__int64 *)v24[1] != v26 )
          __fastfail(3u);
        v26 = (__int64 *)*v26;
        v24[1] = (__int64)&v26;
        ExFreePoolWithTag(v23 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 1740) & 0x20) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 1740), 0x20u);
    }
  }
  v14 = *(_QWORD **)(v4 + 48);
  v15 = (_QWORD *)(a2 + 1136);
  if ( *v14 != v4 + 40 )
    __fastfail(3u);
  inserted = v29;
  *v15 = v4 + 40;
  *(_QWORD *)(a2 + 1144) = v14;
  *v14 = v15;
  v17 = v26;
  *(_QWORD *)(v4 + 48) = v15;
  *(_QWORD *)(a2 + 944) = v4;
  while ( v17 != (__int64 *)&v26 )
  {
    v18 = (__int64 *)*v17;
    if ( (__int64 **)v17[1] != &v26 || (__int64 *)v18[1] != v17 )
      __fastfail(3u);
    v26 = (__int64 *)*v17;
    v18[1] = (__int64)&v26;
    v19 = v17;
    if ( inserted >= 0 )
    {
      v20 = v17[2];
      if ( *(v17 - 1) )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v20, a2, 1);
          if ( inserted < 0 )
            break;
        }
        while ( (*(v19 - 1))-- != 1 );
      }
    }
    ExFreePoolWithTag(v19 - 5, 0);
    v17 = v26;
  }
  if ( inserted < 0 )
  {
    for ( i = a2 + 1920; *(_QWORD *)i != i; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)i + 16LL), a2, 1) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1740), 0xFFFFFFDF);
    _InterlockedOr((volatile signed __int32 *)(a2 + 1740), 0x40u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1912), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1912));
  KeAbPostRelease(a2 + 1912);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
