/*
 * XREFs of MiMakeSpecialPoolPaged @ 0x14020E340
 * Callers:
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSpecialPoolPaged(KSPIN_LOCK *a1, unsigned __int64 *a2)
{
  unsigned __int64 PteShadow; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // r10
  KSPIN_LOCK *v6; // r9
  unsigned int v7; // ebp
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  signed __int32 *v10; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v12; // ebx
  signed __int32 i; // edx
  ULONG_PTR Wsle; // rbx
  unsigned __int8 v15; // bl
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  PteShadow = *a2;
  v3 = 0x90482413000LL;
  v4 = 2040LL;
  v6 = a1;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *a2);
  v17 = PteShadow;
  if ( (unsigned __int64)&v17 + v3 <= v4 )
    PteShadow = MiReadPteShadow(&v17, PteShadow);
  v7 = 0;
  v8 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v6 == &qword_14034FBC0 )
  {
    v9 = 0LL;
    v10 = dword_14034FE40;
  }
  else
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = (signed __int32 *)(v9 + 2968);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v10, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(v10);
    for ( i = *v10; (*v10 & 0xBFFFFFFF) != 0x80000000; i = *v10 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v10, i | 0x40000000, i);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
  }
  Wsle = MiAllocateWsle((__int64)v10, (__int64)a2, v8, 0LL, ZeroPte, 0LL);
  MiUnlockWorkingSetExclusive((__int64)v10, CurrentIrql);
  if ( Wsle )
    return 1LL;
  v15 = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  *(_BYTE *)(v8 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v15);
  if ( (v10[54] & 7u) < 2 )
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 40));
  return 0LL;
}
