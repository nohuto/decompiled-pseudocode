/*
 * XREFs of MiChargeSegmentCommit @ 0x14049C650
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MmCommitSessionMappedView @ 0x14049C330 (MmCommitSessionMappedView.c)
 *     MiCommitPagefileBackedSection @ 0x14049C528 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiUpdateProcessSharedCommit @ 0x14049C8D0 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 **a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // r13
  unsigned __int64 v7; // rbp
  __int64 *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  volatile signed __int64 *v17; // rsi
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // r12
  volatile signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  unsigned int *v24; // [rsp+30h] [rbp-58h]
  _QWORD *v25; // [rsp+38h] [rbp-50h]
  __int64 v26; // [rsp+90h] [rbp+8h]
  int v29; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)a1;
  v6 = (__int64 *)a1;
  v7 = a3;
  v26 = (__int64)CurrentThread;
  v8 = a2;
  v9 = **a1;
  v24 = (unsigned int *)a1 + 11;
  v23 = v9;
  v25 = a1 + 1;
  v10 = (__int64)&a1[1][*((unsigned int *)a1 + 11)];
  if ( a4 == 1 )
    v29 = 1;
  else
    v29 = MiChargeCommit((unsigned __int64)MiSystemPartition, a3, 0LL);
  --CurrentThread->SpecialApcDisable;
  v11 = (unsigned __int64 *)(v9 + 40);
  BugCheckParameter2 = (volatile signed __int64 *)(v9 + 40);
  v12 = KeAbPreAcquire(v9 + 40, 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = 0LL;
  if ( !v29 )
  {
    v15 = 0LL;
    v16 = v7;
    while ( 1 )
    {
      if ( MI_READ_PTE_LOCK_FREE(v8) )
        --v7;
      ++v15;
      ++v8;
      if ( v15 == v16 )
        break;
      if ( v8 == (__int64 *)v10 )
      {
        v5 = (__int64 *)v5[2];
        v8 = (__int64 *)v5[1];
        v10 = (__int64)&v8[*((unsigned int *)v5 + 11)];
      }
    }
    v8 = a2;
    v17 = BugCheckParameter2;
    if ( !v7 )
      goto LABEL_33;
    if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, v7, 0LL) )
    {
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KiLeaveGuardedRegionUnsafe(v26);
      return 0LL;
    }
  }
  v19 = 0LL;
  v20 = 16LL * (*(_BYTE *)(v23 + 14) & 0x3E);
  v21 = *v25 + 8LL * *v24;
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v8) )
    {
      ++v14;
    }
    else
    {
      *v8 = v20;
      if ( MiPteInShadowRange((__int64)v8) )
        MiWritePteShadow((__int64)v8, v20);
    }
    ++v19;
    ++v8;
    if ( v19 == a3 )
      break;
    if ( v8 == (__int64 *)v21 )
    {
      v6 = (__int64 *)v6[2];
      v8 = (__int64 *)v6[1];
      v21 = (__int64)&v8[*((unsigned int *)v6 + 11)];
    }
  }
  v17 = BugCheckParameter2;
  if ( v29 == 1 )
  {
    v7 -= v14;
    if ( v14 )
      MiReturnCommit((__int64)MiSystemPartition, v14);
  }
  if ( v7 )
  {
    MiUpdateProcessSharedCommit(*(_QWORD *)v23, v7);
    _InterlockedExchangeAdd64(&qword_1402FF850, v7);
  }
LABEL_33:
  if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v17);
  KeAbPostRelease((ULONG_PTR)v17);
  KiLeaveGuardedRegionUnsafe(v26);
  return 1LL;
}
