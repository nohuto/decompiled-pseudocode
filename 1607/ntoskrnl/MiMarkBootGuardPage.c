/*
 * XREFs of MiMarkBootGuardPage @ 0x14054E61C
 * Callers:
 *     MmAllocateIsrStack @ 0x14054E5A4 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x14078E3DC (MiInitializeKernelStacks.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkBootGuardPage(_BYTE *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  _QWORD *v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  int v8; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*a1 & 1) != 0 )
  {
    v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
    v1 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v9) - 0x58000000000LL;
    v2 = 48 * (*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFLL);
    *v3 = 0LL;
    v4 = v2 - 0x58000000000LL;
    if ( MiPteInShadowRange((unsigned __int64)v3) )
      MiWritePteShadow(v6, v5);
    KeFlushSingleTb(v7, 0, 1u);
    v8 = MiLockAndDecrementShareCount(v1, 1);
    MiLockAndDecrementShareCount(v4, 0);
    MiReturnResidentAvailable(1uLL);
    if ( v8 != 3 )
    {
      MiReturnCommit((__int64)MiSystemPartition, 1uLL);
      --qword_140327920;
    }
  }
}
