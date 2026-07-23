/*
 * XREFs of MiChargeSegmentCommit @ 0x1404A6130
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmCommitSessionMappedView @ 0x1404A5E08 (MmCommitSessionMappedView.c)
 *     MiCommitPagefileBackedSection @ 0x1404A6010 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiUpdateProcessSharedCommit @ 0x1404A639C (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 **a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v5; // r14
  __int64 *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 v10; // rbp
  __int64 v11; // r12
  unsigned __int64 *v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // rbp
  unsigned __int64 v15; // rbp
  __int64 v16; // r9
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 *v20; // r11
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)a1;
  v6 = (__int64 *)a1;
  v7 = a3;
  v23 = (__int64)CurrentThread;
  v8 = a2;
  v10 = **a1;
  v25 = v10;
  v11 = (__int64)&a1[1][*((unsigned int *)a1 + 11)];
  if ( a4 == 1 )
    v26 = 1;
  else
    v26 = MiChargeCommit((__int64)MiSystemPartition, a3, 0);
  --CurrentThread->SpecialApcDisable;
  v12 = (unsigned __int64 *)(v10 + 40);
  v13 = (_BYTE *)KeAbPreAcquire(v10 + 40, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v13, (ULONG_PTR)v12);
  if ( v14 )
    v14[26] |= 1u;
  v15 = 0LL;
  if ( !v26 )
  {
    while ( 1 )
    {
      if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) )
        --v7;
      ++v8;
      if ( v16 + 1 == a3 )
        break;
      if ( v8 == (__int64 *)v11 )
      {
        v5 = (__int64 *)v5[2];
        v8 = (__int64 *)v5[1];
        v11 = (__int64)&v8[*((unsigned int *)v5 + 11)];
      }
    }
    v8 = a2;
    if ( !v7 )
      goto LABEL_32;
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v7, 0) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KiLeaveGuardedRegionUnsafe(v23);
      return 0LL;
    }
  }
  MiMakeDemandZeroPte((*(_BYTE *)(v25 + 14) >> 1) & 0x1F);
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) )
    {
      ++v15;
    }
    else
    {
      *v8 = v18;
      if ( MiPteInShadowRange((unsigned __int64)v8) )
        MiWritePteShadow(v21, v22);
    }
    ++v8;
    if ( v19 + 1 == a3 )
      break;
    if ( v8 == v20 )
    {
      v6 = (__int64 *)v6[2];
      v8 = (__int64 *)v6[1];
    }
  }
  if ( v26 == 1 )
  {
    v7 -= v15;
    if ( v15 )
      MiReturnCommit((__int64)MiSystemPartition, v15);
  }
  if ( v7 )
  {
    MiUpdateProcessSharedCommit(*(_QWORD *)v25, v7);
    _InterlockedExchangeAdd64(&qword_140327958, v7);
  }
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KiLeaveGuardedRegionUnsafe(v23);
  return 1LL;
}
