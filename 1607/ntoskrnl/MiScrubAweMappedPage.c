/*
 * XREFs of MiScrubAweMappedPage @ 0x1401FE050
 * Callers:
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiScrubPage @ 0x1401FE690 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAweMappedPage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  LONG *SharedVm; // rdi
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  BOOL v14; // ebp
  __int64 v15; // rbx
  unsigned int v16; // edi
  KIRQL v18; // [rsp+50h] [rbp+8h]

  v5 = a4 + 1280;
  v7 = 48 * a2 - 0x58000000000LL;
  v8 = (__int64)(a1 << 25) >> 16;
  v9 = MI_READ_PTE_LOCK_FREE(a1);
  SharedVm = MiGetSharedVm(v5);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v18 = v11;
  if ( *(_WORD *)(v7 + 32) == 2 )
  {
    *(_QWORD *)a1 = 0LL;
    v14 = MiPteInShadowRange(a1);
    if ( v14 )
      MiWritePteShadow(v13, 0LL);
    KeFlushSingleTb(v8, 1u, 0);
    v15 = v9 | 0x20;
    v16 = MiScrubPage(a3, *(_QWORD *)(a3 + 24), v7, 0LL);
    *(_QWORD *)a1 = v15;
    if ( v14 )
      MiWritePteShadow(a1, v15);
    v11 = v18;
  }
  else
  {
    v16 = 0;
  }
  LOBYTE(v12) = v11;
  MiUnlockWorkingSetExclusive(v5, v12);
  return v16;
}
