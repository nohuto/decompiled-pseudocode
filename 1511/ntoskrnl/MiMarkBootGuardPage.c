/*
 * XREFs of MiMarkBootGuardPage @ 0x14052F734
 * Callers:
 *     MmAllocateIsrStack @ 0x14052F6BC (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140762E08 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiMarkBootGuardPage(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v2 = a1 << 25 >> 16;
    v7 = MI_READ_PTE_LOCK_FREE((__int64 *)a1);
    v3 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v7) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL;
    *(_QWORD *)a1 = 0LL;
    v5 = 48 * v4 - 0x58000000000LL;
    if ( MiPteInShadowRange(a1) )
      MiWritePteShadow(a1, 0LL);
    KeFlushSingleTb(v2, 0, 1u);
    v6 = MiLockAndDecrementShareCount(v3, 1);
    MiLockAndDecrementShareCount(v5, 0);
    MiReturnResidentAvailable(1uLL);
    _InterlockedExchangeAdd64(&qword_1402FF550, 1uLL);
    if ( v6 != 3 )
    {
      MiReturnCommit((__int64)MiSystemPartition, 1uLL);
      --qword_1402FF818;
    }
  }
}
