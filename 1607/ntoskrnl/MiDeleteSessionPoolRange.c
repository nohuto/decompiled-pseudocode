/*
 * XREFs of MiDeleteSessionPoolRange @ 0x1401EC974
 * Callers:
 *     MiDeleteLeakedSessionPool @ 0x1405323F8 (MiDeleteLeakedSessionPool.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteSessionPoolRange(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  LONG *SharedVm; // rdi
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // r9
  __int64 v11; // rax
  LONG *v12; // rdi
  __int64 v13; // rcx

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
  v5 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = &v5[a2 >> 12];
  SharedVm = MiGetSharedVm(v4);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v8;
  while ( v5 < v6 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v11 & 0xC01) != 0 || (v11 & 0x3E0) != 0 )
    {
      LOBYTE(v9) = v10;
      MiUnlockWorkingSetExclusive(v4, v9);
      MiDeleteSystemPagableVm(v4, 0LL, (ULONG_PTR)v5, 1LL, 0, a3);
      v12 = MiGetSharedVm(v4);
      ExAcquireSpinLockExclusive(v12);
      v12[1] = 0;
    }
    else if ( !v11 )
    {
      goto LABEL_9;
    }
    *v5 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v5, v9) )
      MiWritePteShadow(v13, 0LL);
LABEL_9:
    ++v5;
  }
  LOBYTE(v9) = v10;
  return MiUnlockWorkingSetExclusive(v4, v9);
}
