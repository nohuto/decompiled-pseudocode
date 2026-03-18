/*
 * XREFs of MiMarkBootGuardPage @ 0x14059A720
 * Callers:
 *     MmAllocateIsrStack @ 0x14059A694 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x1407D3770 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiMarkBootGuardPage(__int64 a1)
{
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 v3; // rsi
  BOOL v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  int v8; // ebx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
    v3 = a1 << 25 >> 16;
    v4 = MiPteInShadowRange(a1);
    if ( v4 )
      PteShadow = MiReadPteShadow(a1, PteShadow);
    v9 = PteShadow;
    if ( MiPteInShadowRange((__int64)&v9) )
      PteShadow = MiReadPteShadow((__int64)&v9, PteShadow);
    v5 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v6 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL;
    *(_QWORD *)a1 = 0LL;
    v7 = 48 * v6 - 0x58000000000LL;
    if ( v4 )
      MiWritePteShadow(a1, 0LL);
    KeFlushSingleTb(v3, 0, 1);
    v8 = MiLockAndDecrementShareCount(v5, 1);
    MiLockAndDecrementShareCount(v7, 0);
    MiReturnResidentAvailable(1uLL);
    _InterlockedExchangeAdd64(&qword_14034F9D0, 1uLL);
    if ( v8 != 3 )
    {
      MiReturnCommit((__int64)MiSystemPartition, 1LL);
      --qword_14034FCD8;
    }
  }
}
