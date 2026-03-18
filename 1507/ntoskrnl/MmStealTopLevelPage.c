/*
 * XREFs of MmStealTopLevelPage @ 0x14010EF54
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x14010EDCC (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiReplacePageTablePage @ 0x14010F190 (MiReplacePageTablePage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14020ACBC (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x14020ACD0 (KeMakeUserDirectoryTableBase.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  volatile signed __int32 *v5; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v7; // ebp
  __int64 i; // rdx
  unsigned int v9; // esi
  __int64 v10; // r11
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 *v13; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v15; // r10
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  volatile __int64 *v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  v5 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    for ( i = *(unsigned int *)v5; (*v5 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v5 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  MiReplacePageTablePage(a1, i);
  if ( *(int *)(a1 + 64) >= 0 )
  {
    v10 = 0x12090482600LL;
    v11 = *(_QWORD *)(a1 + 32);
    v12 = (*(_DWORD *)(a1 + 8) >> 12) & 0x1FF;
    v13 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v12);
    PteShadow = *v13;
    v15 = (unsigned __int64)(v13 + 0x12090482600LL);
    if ( (unsigned __int64)(v13 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(*(_QWORD *)(a1 + 16) + 8 * v12, *v13);
    v16 = (v11 & 0xFFFFFFFFFLL) << 12;
    v17 = v16 | PteShadow & 0xFFFF000000000FFFuLL;
    *v13 = v17;
    if ( v15 <= 0x7F8 )
    {
      MiWritePteShadow(v13, v17);
      v10 = 0x12090482600LL;
    }
    if ( *(_DWORD *)(a1 + 68) )
    {
      v18 = (volatile __int64 *)(((*(_QWORD *)&Process[2].ProcessLock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v19 = *v18;
      v20 = (unsigned __int64)&v18[v10];
      if ( (unsigned __int64)&v18[v10] <= 0x7F8 )
        v19 = MiReadPteShadow(((*(_QWORD *)&Process[2].ProcessLock >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v18);
      v21 = v16 | v19 & 0xFFFF000000000FFFuLL;
      _InterlockedExchange64(v18, v21);
      if ( v20 <= 0x7F8 )
        MiWritePteShadow(v18, v21);
      KeFlushSingleTb((__int64)((_QWORD)v18 << 25) >> 16, 0, 2);
      Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v11 << 12);
    }
    else
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v11 << 12);
    }
    v7 = 1;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], CurrentIrql);
  return v7;
}
