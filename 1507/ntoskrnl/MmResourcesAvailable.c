/*
 * XREFs of MmResourcesAvailable @ 0x140013FD0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     MiFreePoolPagesLeft @ 0x1400140A8 (MiFreePoolPagesLeft.c)
 *     MiMaximumCommitmentAvailable @ 0x1400140D0 (MiMaximumCommitmentAvailable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiFreeExcessSegments @ 0x140129184 (MiFreeExcessSegments.c)
 *     MiTrimSegmentCache @ 0x1401701C0 (MiTrimSegmentCache.c)
 *     MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT @ 0x1402206F8 (MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT.c)
 *     MiIssuePageExtendRequestNoWait @ 0x140221D54 (MiIssuePageExtendRequestNoWait.c)
 */

__int64 __fastcall MmResourcesAvailable(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  char v4; // r15
  int v5; // r12d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // r14d
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  int v15; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int16 v22; // ax
  int v23; // eax
  unsigned __int64 v24; // rax
  _BYTE v25[32]; // [rsp+60h] [rbp+60h] BYREF

  v3 = a3;
  v4 = a1;
  v5 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v6 = 5LL;
LABEL_3:
    v7 = MiFreePoolPagesLeft(v6, a2, a3, a2);
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v6 = 6LL;
    goto LABEL_3;
  }
  v7 = MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT(a1, a2, a3, a2);
LABEL_4:
  v9 = 0;
  v10 = v7 << 12;
  v11 = v8 + 0x80000;
  if ( v3 != 16 )
    v11 = v8 + 0x200000;
  if ( v11 <= v10 )
  {
    if ( v5 && (v13 = MiMaximumCommitmentAvailable(), v14 > v13) )
    {
      MiIssuePageExtendRequestNoWait(&MiSystemPartition, v14, 0LL);
    }
    else
    {
      if ( v8 + 10485760 < v10 || qword_1403551D0 < 0x40000 )
        return 1LL;
      v9 = 1;
    }
  }
  v15 = v4 & 0x20;
  if ( !v15 )
  {
    if ( v5 )
    {
      ++dword_14034E6D8;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v17 = KeAbPreAcquire((ULONG_PTR)&qword_14034FC28);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034FC28, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_14034FC28, v17, &qword_14034FC28);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      if ( !qword_140353E20->Header.SignalState )
        KePulseEvent(qword_140353E20, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034FC28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_14034FC28);
      KeAbPostRelease((ULONG_PTR)&qword_14034FC28);
      v22 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v20, v19, v21);
      }
    }
    else
    {
      ++dword_14034E6D4;
      KeAcquireInStackQueuedSpinLock(
        &qword_140354CC0,
        (PKLOCK_QUEUE_HANDLE)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL));
      if ( !qword_140353E30->Header.SignalState )
        KePulseEvent(qword_140353E30, 0, 0);
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL));
    }
    if ( !(unsigned int)MiFreeExcessSegments(1LL) )
      MiTrimSegmentCache();
  }
  if ( !v9 )
  {
    v23 = (v3 != 16) + 1;
    if ( v5 )
    {
      if ( v15 )
      {
        ++*((_DWORD *)&MiState + v23 + 16);
        v24 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
        ++*(_DWORD *)(v24 + 88);
      }
      else
      {
        ++*((_DWORD *)&MiState + v23 + 13);
      }
    }
    else
    {
      ++*((_DWORD *)&MiState + v23 + 10);
    }
    ++dword_14034E690;
  }
  return v9;
}
