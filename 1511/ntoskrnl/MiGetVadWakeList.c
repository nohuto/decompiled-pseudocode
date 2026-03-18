/*
 * XREFs of MiGetVadWakeList @ 0x14006C180
 * Callers:
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiFreeRotateView @ 0x140623DAC (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x140623EA4 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, int a2, __int64 a3)
{
  __int64 **v3; // r14
  __int64 *v4; // rdi
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 *v12; // rdx
  bool v13; // zf
  unsigned __int32 v14; // eax

  v3 = (__int64 **)(a1 + 56);
  v4 = 0LL;
  v6 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, CurrentIrql);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v6, CurrentIrql, a3);
    v9 = *(unsigned int *)v6;
    if ( (*v6 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v9 & 0x40000000) == 0 )
        {
          v14 = _InterlockedCompareExchange(v6, v9 | 0x40000000, v9);
          v13 = (_DWORD)v9 == v14;
          v9 = v14;
          if ( !v13 )
            continue;
        }
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8, v9, a3);
        v9 = *(unsigned int *)v6;
      }
      while ( (v9 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  v10 = *v3;
  if ( *v3 )
  {
    do
    {
      v12 = (__int64 *)*v10;
      if ( (a2 & (_DWORD)v10[1]) != 0 )
      {
        *v10 = (__int64)v4;
        v4 = v10;
        *v3 = v12;
      }
      else
      {
        v3 = (__int64 **)v10;
      }
      v10 = v12;
    }
    while ( v12 );
  }
  MiUnlockWorkingSetExclusive((__int64)v6, CurrentIrql, a3);
  return v4;
}
