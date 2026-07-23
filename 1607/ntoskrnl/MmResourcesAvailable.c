/*
 * XREFs of MmResourcesAvailable @ 0x14007E300
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFreePoolPagesLeft @ 0x140027D10 (MiFreePoolPagesLeft.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiMaximumCommitmentAvailable @ 0x14007E550 (MiMaximumCommitmentAvailable.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiSessionPoolVaRemaining @ 0x1401ECB6C (MiSessionPoolVaRemaining.c)
 *     MiIssuePageExtendRequest @ 0x1401EE7B4 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // r12d
  __int64 v5; // r9
  char v6; // bp
  int v7; // r14d
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  int v14; // ebp
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // edi
  unsigned __int64 v21; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a1 & 1;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      v9 = MiSessionPoolVaRemaining(a1, a2, a3, a2);
      goto LABEL_7;
    }
    v8 = MiFreePoolPagesLeft(6);
  }
  else
  {
    v8 = MiState[0] - qword_140326498;
  }
  v9 = v8 << 12;
LABEL_7:
  v10 = v5 + 0x80000;
  v11 = 0;
  if ( v4 != 16 )
    v10 = v5 + 0x200000;
  if ( v10 <= v9 )
  {
    if ( v7 && (v12 = MiMaximumCommitmentAvailable(), v13 > v12) )
    {
      MiIssuePageExtendRequest(MiSystemPartition, v13, 2LL);
    }
    else
    {
      if ( v5 + 10485760 < v9 || qword_140324E10 < 0x40000 )
        return 1LL;
      v11 = 1;
    }
  }
  v14 = v6 & 0x20;
  if ( !v14 )
  {
    if ( v7 )
    {
      ++dword_140326520;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v18 = KeAbPreAcquire((ULONG_PTR)&qword_140327868, 0LL, 0);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140327868, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_140327868, v18, &qword_140327868);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      if ( !qword_140323698->Header.SignalState )
        KePulseEvent(qword_140323698, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140327868, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140327868);
      KeAbPostRelease((ULONG_PTR)&qword_140327868);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      ++dword_14032651C;
      KeAcquireInStackQueuedSpinLock(&qword_140324680, &LockHandle);
      if ( !qword_1403236A8->Header.SignalState )
        KePulseEvent(qword_1403236A8, 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    MiFreeExcessSegments(v15);
  }
  if ( !v11 )
  {
    LOBYTE(v3) = v4 != 16;
    v20 = v3 + 1;
    if ( v7 )
    {
      if ( v14 )
      {
        ++*((_DWORD *)&MiState[9] + v20);
        v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
        ++*(_DWORD *)(v21 + 88);
      }
      else
      {
        ++*((_DWORD *)&MiState[7] + v20 + 1);
      }
    }
    else
    {
      ++*((_DWORD *)&MiState[6] + v20);
    }
    ++dword_1403264D8;
  }
  return v11;
}
