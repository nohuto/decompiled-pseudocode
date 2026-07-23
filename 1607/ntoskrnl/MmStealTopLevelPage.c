/*
 * XREFs of MmStealTopLevelPage @ 0x1401E3504
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1401DAE10 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReplacePageTablePage @ 0x1400A3B30 (MiReplacePageTablePage.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401DB9B4 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x1401DB9C8 (KeMakeUserDirectoryTableBase.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned int v7; // edi
  KIRQL v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r11
  volatile __int64 *v19; // r10
  __int64 v20; // r10

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v7 = 0;
  SharedVm[1] = 0;
  v8 = v6;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 8) + 8LL * ((((*(_DWORD *)a1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    v13 = v12 | v11 & 0xFFFF000000000FFFuLL;
    *v14 = v13;
    if ( (unsigned int)MiPteInShadowRange(v14, v13) )
      MiWritePteShadow(v16, v15);
    if ( *(_DWORD *)(a1 + 60) )
    {
      v17 = MI_READ_PTE_LOCK_FREE(((*(_QWORD *)&Process[2].Affinity.Count >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MI_INTERLOCKED_EXCHANGE_PTE(v19, v18 | v17 & 0xFFFF000000000FFFuLL);
      KeFlushSingleTb(v20 << 25 >> 16, 0, 2u);
      Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v10 << 12);
    }
    else
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v10 << 12);
    }
    v7 = 1;
  }
  LOBYTE(v9) = v8;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v9);
  return v7;
}
